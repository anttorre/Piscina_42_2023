/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:19:23 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/13 12:33:33 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[20];
	char	dest[20];

	src[20] = "Hola";
	unsigned int n = 3; 
	
	printf("%s\n", src);
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
}
*/
