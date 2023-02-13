/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:50:01 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/13 17:50:04 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 32 && str[i] <= 126)
		i++;
	else
		return (0);
	return (1);
}
/*
int	main(void)
{
	char str[] = "∂ƒ˙©ƒ∆©˙©©˙";

	if (ft_str_is_printable(str) == 1)
		printf("Contiene caracteres imprimibles");
	else
		printf("Contiene otro tipo de caracteres");
}
*/