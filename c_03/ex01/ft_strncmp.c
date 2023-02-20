/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:21:00 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/20 13:10:30 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* 
int	main(void)
{
	char	        s1[] = "hO";
	char            s2[] = "HOlA";
    unsigned int    n = 2;

	printf("Result: %d\n", ft_strncmp(s1, s2, n));
	if (ft_strncmp(s1, s2, n) > 0)
		printf("La cadena s1 es mayor que s2");
	else if (ft_strncmp(s1, s2, n) == 0)
		printf("La cadena s1 es igual que s2");
	else
		printf("La cadena s1 es menor que s2");
    printf("\n%d", strncmp(s1, s2, n));
	return (0);
}
 */