/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:11:36 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/13 11:03:55 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[];
	char	dest[ft_strlen(src)];

	src[] = "Hola";
	printf("Origen contiene: %s\n", src);
	ft_strcpy(dest, src);
	printf("Destino contiene: %s\n", dest);
	printf("Origen contiene: %s\n", src);
	return (0);
}
*/
