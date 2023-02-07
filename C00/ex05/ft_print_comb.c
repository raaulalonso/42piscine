/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:51:33 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/07 21:04:25 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	printnb(void);

char	g_num1;
char	g_num2;
char	g_num3;

void	ft_print_comb(void)
{
	g_num1 = 48;
	g_num2 = 49;
	g_num3 = 50;
	while (g_num1 < 58)
	{
		while (g_num2 < 58)
		{
			printnb();
			++g_num2;
			g_num3 = (g_num2 + 1);
		}
		++g_num1;
		g_num2 = (g_num1 + 1);
		g_num3 = (g_num2 + 1);
	}
}

void	printnb(void)
{
	while (g_num3 < 58)
	{
		write(1, &g_num1, 1);
		write(1, &g_num2, 1);
		write(1, &g_num3, 1);
		if (g_num1 == 55)
			write(1, "", 1);
		else
			write(1, ", ", 2);
		++g_num3;
	}
}
