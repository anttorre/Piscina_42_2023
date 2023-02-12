/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:41:59 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/11 17:27:12 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_putstrlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	char	aux;
	int		i;
	int		size;

	i = 0;
	size = ft_putstrlen(str);
	while (i < size)
	{
		aux = str[i];
		str[i] = str[size - 1];
		str[size - 1] = aux;
		i++;
		size--;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "Hola";

	printf("Cadena invertida: '%s'\n", ft_strrev(str));
}
