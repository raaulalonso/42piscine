/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:13:43 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/08 20:17:40 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if ((nb < 0) && (nb != -2147483648))
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb != -2147483648)
	{
		num = nb + 48;
		write(1, &num, 1);
	}
}

/*int main(void)
{
	ft_putnbr(42);
	return (0);
}*/
