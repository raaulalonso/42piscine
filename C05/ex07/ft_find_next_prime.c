/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:14:20 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/22 21:30:25 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;
	long	num;

	num = nb;
	i = 2;
	if (num <= 1)
		return (0);
	while (i <= (num / 2))
	{
		if (!(num % i))
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	i;
	long	num;

	num = nb;
	i = num;
	if (num <= 0)
		return (2);
	while (i)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		i++;
	}
	return (num);
}

#include <stdio.h>

int main(void)
{
	int nb;
	nb = ft_find_next_prime(6);
	printf("%d", nb);
	return 0;
}
