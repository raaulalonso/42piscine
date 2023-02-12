/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:48:42 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/12 13:51:14 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	if (str[c] == '\0')
		return (1);
	while (str[c] != '\0')
	{
		if ((str[c] < 65) || (str[c] > 90))
		{
			return (0);
		}
		++c;
	}
	return (1);
}