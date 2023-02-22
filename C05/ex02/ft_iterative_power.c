/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:16:29 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/22 19:08:33 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	aux;

	aux = nb;
	i = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i != (power - 1))
	{
		nb = (aux * nb);
		i++;
	}
	return (nb);
}

/*int main(void)
{
	int nb;
	nb = ft_iterative_power(3, 7);
	printf("%d", nb);
	return 0;
}*/
