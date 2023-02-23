/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:14:23 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/23 19:59:05 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*num;

	len = (max - min);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	num = (int *)malloc(len * sizeof(int));
	if (!num)
		return (-1);
	*range = num;
	while (min != max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (len);
}

/*int main(void)
{
    int *range;
    ft_ultimate_range(&range, 4, 9);
    return 0;
}*/
