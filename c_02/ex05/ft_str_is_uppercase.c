/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:53:12 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/13 15:39:17 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "asdHasdasgHLDS93532";

	if (ft_str_is_uppercase(str) == 1)
		printf("Contiene caracteres unicamente alfabeticos en mayusculas");
	else
		printf("Contiene otro tipo de caracteres");
}
*/