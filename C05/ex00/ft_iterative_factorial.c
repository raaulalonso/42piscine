/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:45:09 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/22 19:03:12 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res = (res * i);
		i++;
	}
	return (res);
}

/*int main(void)
{
	int nb;
	nb = ft_iterative_factorial(9);
	printf("%d", nb);
	return 0;
}*/
