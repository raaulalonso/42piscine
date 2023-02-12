/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:59:19 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/12 14:15:12 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	c;
	unsigned	int	
		c2;

	c = 0;
	c2 = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while ((src[c2] != '\0') && (c2 < nb))
	{
		dest[c + c2] = src[c2];
		c2++;
	}
	dest[c + c2] = '\0';
	return (dest);
}
