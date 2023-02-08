/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:51:33 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/08 20:16:10 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	printnb(char num1, char numm2, char num3);

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = 48;
	num2 = 49;
	num3 = 50;
	while (num1 < 58)
	{
		while (num2 < 58)
		{
			printnb(num1, num2, num3);
			++num2;
			num3 = (num2 + 1);
		}
		++num1;
		num2 = (num1 + 1);
		num3 = (num2 + 1);
	}
}

void	printnb(char num1, char num2, char num3)
{
	while (num3 < 58)
	{
		write(1, &num1, 1);
		write(1, &num2, 1);
		write(1, &num3, 1);
		if (num1 == 55)
			write(1, "", 1);
		else
			write(1, ", ", 2);
		++num3;
	}
}

/*int main(void)
{
	ft_print_comb();
	return (0);
}*/
