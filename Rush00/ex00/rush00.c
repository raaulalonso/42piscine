/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sufernan <sufernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:24:48 by sufernan          #+#    #+#             */
/*   Updated: 2023/02/06 16:02:52 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int x, int y);

int	rush(int x, int y)
{
	int	end1;

	end1 = 0;
	if ((x <= 0) || (y <= 0))
		return (0);
	else
	{	
		write (1, "o", 1);
		while (end1 <= (x - 3))
		{
			++end1;
			write (1, "-", 1);
			if (end1 > (x - 3))
				write (1, "o", 1);
		}
		if (x == 2)
			write (1, "o", 1);
		ft_putchar(x, y);
		if ((x == 1) || (y == 1))
			write (1, "\n", 1);
		if (y != 1)
			write (1, "o\n", 2);
	}
	return (0);
}
