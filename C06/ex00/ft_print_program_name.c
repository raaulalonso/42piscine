/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:28:26 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/16 14:05:03 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int n, char **name)
{
	int	i;

	i = 0;
	if (n == 1)
	{
		while (name[0][i] != '\0')
		{
			write(1, &name[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
