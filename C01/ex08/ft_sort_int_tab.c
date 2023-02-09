/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:12:51 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/09 23:04:58 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	count2;
	int	temp;

	count = 1;
	count2 = 0;
	while (count2 != size)
	{
		while (count < size)
		{
			if (tab[count] < tab[count - 1])
			{
				temp = tab[count - 1];
				tab[count - 1] = tab[count];
				tab[count] = temp;
			}	
			++count;
		}
		++count2;
		count = 1;
	}
}
