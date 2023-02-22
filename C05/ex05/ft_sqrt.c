/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:22:53 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/22 21:27:39 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	res;
	long	num;

	num = nb;
	res = 2;
	if (num <= 0)
		return (0);
	if (num == 1)
		return (1);
	if (num > 1)
	{
		while (res * res <= num)
		{
			if (res * res == num)
				return (res);
			res++;
		}
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	int nb;
	nb = ft_sqrt(25);
	printf("%d", nb);
	return 0;
}
