/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:49:49 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/15 21:00:17 by raalonso         ###   ########.fr       */
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
	int	minus;
	int	num;

	minus = 0;
	c = 0;
	while (((str[c] > 8) && (str[c] < 14)) || (str[c] == 32))
	{
		c++;
	}
	while ((str[c] == '-') || (str[c] == '+'))
	{
		if (str[c] == '-')
			minus++;
		c++;
	}
	num = transform(c, str);
	if ((minus % 2) != 0)
	{
		num *= -1;
	}
	return (num);
}

/*int main(void)
{
	char *str = "    --+++---1233as231";
	ft_atoi(str);
	return (0);
}*/
