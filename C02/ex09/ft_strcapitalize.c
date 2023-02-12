/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:22:59 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/12 11:47:45 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 91) && (str[c] > 64))
			str[c] = (str[c] + 32);
		c++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	cap;

	c = 0;
	cap = 1;
	ft_strlowcase(str);
	while (str[c] != '\0')
	{
		if (((str[c] > 96) && (str[c] < 123)) && (cap == 1))
		{
			str[c] = (str[c] - 32);
			cap = 0;
		}
		else if ((str[c] < 58) && (str[c] > 47))
		{
			cap = 0;
		}
		else if ((str[c] < 97) || (str[c] > 122))
		{
			cap = 1;
		}
		c++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "Hola Esto es 32na frase";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}*/
