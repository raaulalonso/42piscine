/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:10:17 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/09 22:43:52 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int a)
{
	int	num1;
	int	num2;

	num1 = (a / 10);
	num2 = (a % 10);
	ft_putchar(num1 + 48);
	ft_putchar(num2 + 48);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = (a + 1);
		while (b <= 99)
		{
			ft_print(a);
			ft_putchar(' ');
			ft_print(b);
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++b;
		}
		++a;
	}
}

/*int main(void)
{
	ft_print_comb2();
	return 0;
}*/
