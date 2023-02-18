/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:05:57 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/16 17:46:06 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	if (argc > 1)
	{
		n = (argc - 1);
		i = 0;
		while (n != 0)
		{
			while (argv[n][i] != '\0')
			{
				write(1, &argv[n][i], 1);
				i++;
			}
			write(1, "\n", 1);
			--n;
			i = 0;
		}
	}
	return (0);
}
