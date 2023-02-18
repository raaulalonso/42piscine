/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:25:59 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/16 18:29:25 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	strswap(int n, char **argv)
{
	int j;
	char	temp[1024];

	j = 0;
	while (argv[n][j] != '\0')
	{
		temp[j] = argv[n][j];
		j++;
	}
	temp[j] = '\0';
	j = 0;
	while (argv[n + 1][j] != '\0')
	{
		argv[n][j] = argv[n][j];
		j++;
	}
	argv[n][j] = '\0';
	j = 0;
	while (temp[j] != '\0')
	{
		argv[n + 1][j] = temp[j];
	}
	argv[n + 1][j] = '\0';
	j = 0;
}	

void	putstrings(char **argv)
{
	int j;
	int p;

	p = 1;
	j = 0;
	while (argv[p] != '\0')
	{
		j = 0;
		while (argv[p][j] != '\0')
		{
			write(1, &argv[p][j], 1);
			j++;
		}
		write(1, "\n", 1);
		p++;
	}
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;
	int	end;

	if (argc > 1)
	{
		n = 1;
		i = 0;
		end = 0;
		while (n < argc)
		{
			while (((argv[n][i] != '\0') || (argv[n + 1][i] != '\0')) && (argv[n] != '\0'))
			{
				if (argv[n][i] > argv[n + 1][i])
				{
					strswap(n, argv);
					n++;
					i = 0;
				}
				else 
					i++;
			}
			n = 0;
			end++;
		}
	}
	putstrings(argv);
	return (0);
}
