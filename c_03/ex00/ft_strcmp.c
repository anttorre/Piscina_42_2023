/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:56:04 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/20 13:10:36 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
Compara 2 cadenas de caracteres mientras la primera sea 
distinta de nulo y ademas el primer caracter
de una sea igual que la otra aumenta el indice y compara la 
siguiente si son distintas hace la resta y si es mayor de 0
la cadena s1 es mayor que la s2 si es menor que 0 la cadena 
s1 es menor que la s2
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "HolA";
	char	s2[] = "HOlA";

	printf("Result: %d\n", ft_strcmp(s1, s2));
	if (ft_strcmp(s1, s2) > 0)
		printf("La cadena s1 es mayor que s2");
	else if (ft_strcmp(s1, s2) == 0)
		printf("La cadena s1 es igual que s2");
	else
		printf("La cadena s1 es menor que s2");
	return (0);
}
*/