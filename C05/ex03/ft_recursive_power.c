/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:21:11 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/22 19:15:49 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

/*int	main(void)
{
	int	nb;

	nb = ft_recursive_power(3, 6);
	printf("%d", nb);
	return 0;
}*/
