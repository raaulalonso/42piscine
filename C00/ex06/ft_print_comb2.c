/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:10:17 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/08 20:17:20 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char num[4]);

void	ft_print_comb2(void)
{
	char	num[4];

	num[0] = 48;
	num[1] = 48;
	num[2] = 48;
	num[3] = 49;
	while (num[0] < 58)
	{
		while (num[1] < 58)
		{
			while (num[2] < 58)
			{
				print_number(num);
				++num[2];
				num[3] = 48;
			}
			++num[1];
			num[2] = num[0];
			num[3] = (num[1] + 1);
		}
		++num[0];
		num[1] = 48;
	}
}

void	print_number(char num[4])
{
	while (num[3] < 58)
	{
		write(1, &num[0], 1);
		write(1, &num[1], 1);
		write(1, " ", 1);
		write(1, &num[2], 1);
		write(1, &num[3], 1);
		if ((num[0] == 57) && (num[1] == 56))
			write(1, "", 1);
		else
			write(1, ", ", 2);
		++num[3];
	}
}

/*int main(void)
{
	ft_print_comb2();
	return 0;
}*/
