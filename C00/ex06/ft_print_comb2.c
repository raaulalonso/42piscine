/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:10:17 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/07 21:42:55 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(void)
//void	ft_print_comb2(void)
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
				while (num[3] < 58)
				{
					write(1, &num[0], 1);
					write(1, &num[1], 1);
					write(1, " ", 1);
					write(1, &num[2], 1);
					write(1, &num[3], 1);
					write(1, ", ", 1);
					++num[3];
				}
				++num[2];
				num[3] = 0;
			}
			++num[1];
			num[2] = 0;
		}
		++num[0];
		num[1] = 0;
	}
	return 0;

}
