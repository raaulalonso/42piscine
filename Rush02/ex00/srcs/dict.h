/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpostica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:37:14 by tpostica          #+#    #+#             */
/*   Updated: 2023/02/18 23:57:13 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void dict(int num)
{
	if (num == 0)
		write(1, "zero ", 5);
	else if (num == 1)
		write(1, "one ", 4);
	else if (num == 2)
		write(1, "two ", 4);
	else if (num == 3)
		write(1, "three ", 6);
	else if (num == 4)
		write(1, "four ", 5);
	else if (num == 5)
		write(1, "five ", 5);
	else if (num == 6)
    	write(1, "six ", 4);
	else if (num == 7)
    	write(1, "seven ", 6);
	else if (num == 8)
    	write(1, "eight ", 6);
	else if (num == 9)
    	write(1, "nine ", 5);
}
