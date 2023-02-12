/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:46:48 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/12 18:19:22 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	len;

	c = 0;
	len = ft_strlen(src);
	while ((src[c] != '\0') && (c < size))
	{
		dest[c] = src[c];
		c++;
	}
	if (size != 0)
	{
		while (c < size)
		{
			dest[c] = '\0';
			c++;
		}
	}
	return (len);
}
