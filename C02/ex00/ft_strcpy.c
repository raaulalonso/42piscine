/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:24:05 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/12 11:48:01 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		++count;
	}
	dest[count] = '\0';
	return (dest);
}

/*int main(void)
{
	char str[] = "hola";
	char str2[] = "adios";

	printf("%s\n", str2);
	ft_strcpy(str2, str);
	printf("%s", str2);
	return (0);
}*/
