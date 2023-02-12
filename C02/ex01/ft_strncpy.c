/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:44:00 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/12 18:19:37 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((src[count] != '\0') && (count < n))
	{
		dest[count] = src[count];
		++count;
	}
	while (count < n)
	{
		dest[count] = '\0';
		++count;
	}
	return (dest);
}

/*int main(void)
{
    char str[] = "hola";
    char str2[] = "adios";

    printf("%s\n", str2);
    ft_strncpy(str2, str, 2);
    printf("%s", str2);
    return (0);
}*/
