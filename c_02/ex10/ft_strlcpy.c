/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:28:20 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/16 18:55:10 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length_src;

	length_src = 0;
	while (src[length_src] != '\0')
	{
		length_src++;
	}
	if (size < 1)
		return (length_src);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length_src);
}
/* 
int	main(void)
{
	char			src[] = "Prueba Num1dtghrdfhtrgfhtdf";
	char			dest[20] = "";
	unsigned int	size;

	size = sizeof(dest);
	printf("Caracteres del origen copiados:%d\n", ft_strlcpy(dest, src, size));
	printf("Cadena copiada en destino: %s\n", dest);
	printf("Caracteres del origen copiados:%lu\n", strlcpy(dest, src, 0));
	printf("Cadena copiada en destino: %s\n", dest);
	return (0);
}
 */