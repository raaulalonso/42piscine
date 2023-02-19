/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpostica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:12:12 by tpostica          #+#    #+#             */
/*   Updated: 2023/02/19 00:01:26 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "srcs/atoi.h"
#include "srcs/str_len.h"
#include "srcs/putnbr.h"

int main(int argc, char *argv[])
{
	int num;
	int length;

	if (argc == 2)
	{
		length = str_len(argv[1]);
		if (length != 0)
		{
			num = ft_atoi(argv[1]);
			putnbr(num);
			write(1, "\n", 1);
			return (0);
		}
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
}
