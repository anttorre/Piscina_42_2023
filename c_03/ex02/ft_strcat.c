/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:13:47 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/20 13:53:39 by anttorre         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	dest_length;
	int	i;

	dest_length = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
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
	char	s1[42] = "Hola Portal asteri ";
	char	s2[20] = "Mundo Portal asteri";

    ft_strcat(s1, s2);
    printf("%s\n", s1);
    //strcat(s1, s2);
    //printf("%s\n", s1);
}
 */