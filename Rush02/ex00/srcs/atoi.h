/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpostica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:02:01 by tpostica          #+#    #+#             */
/*   Updated: 2023/02/18 22:04:26 by tpostica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	transform(int c, char *str)
{
	int	num;
	int	c2;

	num = 0;
	c2 = 0;
	while ((str[c] < 58) && (str[c] > 47) && (str[c] != '\0'))
	{
		if (c2 != 0)
			num = (num * 10);
		num = (num + (str[c] -48));
		c++;
		c2++;
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	c;
	int	num;

	c = 0;
	num = transform(c, str);
	return (num);
}
