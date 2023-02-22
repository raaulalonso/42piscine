/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:25:59 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/22 21:47:22 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;
	int	i;

	cmp = 0;
	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			cmp = (s1[i] - s2[i]);
			return (cmp);
		}
		i++;
	}
	return (cmp);
}

void	axe(char **str1, char **str2, int i)
{
	char	*temp;

	i = 0;
	while ((str1[i] != '\0') && (str2[i] != '\0'))
	{
		if (ft_strcmp(*str1, *str2) > 0)
		{
			temp = *str1;
			*str1 = *str2;
			*str2 = temp;
			i = 0;
			break ;
		}
		i++;
	}
}	

void	putstrings(char **argv)
{
	int	j;
	int	p;

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

int	main(int argc, char *argv[])
{
	int	n;
	int	i;
	int	end;

	if (argc > 1)
	{
		i = 0;
		end = 0;
		while (end < argc)
		{
			n = 1;
			while (argv[n + 1] != '\0')
			{
				axe(&argv[n], &argv[n + 1], i);
				i = 0;
				n++;
			}
			end++;
		}
	}
	putstrings(argv);
	return (0);
}
