/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sufernan <sufernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:00:26 by sufernan          #+#    #+#             */
/*   Updated: 2023/02/06 17:16:32 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y)
{
	int	end2;
	int	end3;

	end2 = 0;
	end3 = 0;
	while (end2 <= (y - 3))
	{
		++end2;
		write (1, "\n|", 2);
		while (end3 <= (x - 3))
		{
			++end3;
			write(1, " ", 1);
			if (end3 > (x - 3))
				write (1, "|", 1);
		}
		end3 = 0;
	}
	while ((end3 <= (x - 3)) && (y != 1))
	{
		if (end3 == 0)
			write (1, "\no", 2);
		++end3;
		write (1, "-", 1);
	}
}
