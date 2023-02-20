/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:09:28 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/20 13:53:34 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_length;
	unsigned int	i;

	dest_length = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
/* 
int	main(void)
{
	char	s1[42] = "Hola Portal asteri Hola Portal aster";
	char	s2[20] = "Mundo Portal asteri";

    printf("%d\n", ft_strlen(s1));
    ft_strncat(s1, s2, -2);
    //strncat(s1, s2, -2);
    printf("%s\n", s1);
} */
