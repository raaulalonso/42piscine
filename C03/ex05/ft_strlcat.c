/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:49:26 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/13 20:34:46 by raalonso         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	c2;
	unsigned int	lensrc;
	unsigned int	lendest;

	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	c = 0;
	c2 = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	if ((size == 0) || (size <= lendest))
		return (lendest + size);
	while ((src[c2] != '\0') && (c2 < size))
	{
		dest[c] = src[c2];
		c++;
		c2++;
	}
	dest[c] = '\0';
	return (lensrc + lendest);
}
