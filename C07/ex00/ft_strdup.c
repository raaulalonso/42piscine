/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:23:24 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/23 19:56:19 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	
		*cp;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	cp = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	if (!cp)
		return (0);
	while (src[i] != '\0')
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

/*#include <stdio.h>
int main(void)
{
	char	s1[] = "hola";
	printf("%s", ft_strdup(s1));
	return 0;
}*/
