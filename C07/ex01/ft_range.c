/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:53:12 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/23 19:56:58 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (0);
	i = 0;
	array = (int *)malloc((max - min) * sizeof(int));
	if (!array)
		return (0);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*#include <stdio.h>

int main(void)
{
	int *array = ft_range(5, 9);
	int count = 0;
	while (array[count])
	{	
		printf("%d", array[count]);
		count++;
	}
	//printf("%d%d%d%d", array[0], array[1], array[2], array[3]);
	return 0;
}*/
