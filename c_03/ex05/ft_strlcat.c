/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:09:40 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/20 10:29:50 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	i;

	i = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size == 0)
		return (dest_length + src_length);
	while (src[i] != '\0' && (dest_length + i) < (size - 1))
	{
		dest[dest_length + i] = src[i];
		++i;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
/* 
int	main(void)
{
	char	dest[40] = "Hola puerto "; //12
	char	src[] = "asteri mundohhhhhhhhhhhhhhhj"; //28

	//strlcat(dest, src, 40);
    ft_strlcat(dest, src, sizeof(dest));
    printf("Caracteres retornados: %u\n", ft_strlcat(dest, src, sizeof(dest)));
	printf("%s\n", dest);
	return (0);
} */