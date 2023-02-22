/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:42:59 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/19 19:08:47 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	if (argc > 1)
	{
		n = 1;
		i = 0;
		while (n < argc)
		{
			if (n < argc)
			{
				while ((argv[n][i] != '\0') && (n < argc))
				{
					write(1, &argv[n][i], 1);
					i++;
				}
				write(1, "\n", 1);
				++n;
				i = 0;
			}
			else
				return (0);
		}
	}
	return (0);
}
