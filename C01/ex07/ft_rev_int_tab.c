/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:36:58 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/09 22:20:51 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	while (count < (size / 2))
	{
		temp = (tab[count]);
		tab[count] = tab[((size -1) - count)];
		tab[(size - 1) - count] = temp;
		++count;
	}
}
