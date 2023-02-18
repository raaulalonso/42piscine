/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:42:59 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/16 20:20:29 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	if (argc > 1)
	{
		n = 1;
		i = 0;
		while (argv[n] != '\0')
		{
			while (argv[n][i] != '\0')
			{
				write(1, &argv[n][i], 1);
				i++;
			}
			write(1, "\n", 1);
			++n;
			i = 0;
		}
	}
	return (0);
}
