/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:02:51 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/22 18:21:44 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/* 
int	main(void)
{
	int a;
	int p;

	a = 15;
	p = 0;
	printf("Potencia de %i elevado a %i es: %i\n",a ,p ,ft_iterative_power(a, p));
	return (0);
} */