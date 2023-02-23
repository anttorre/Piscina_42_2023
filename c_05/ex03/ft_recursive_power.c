/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:17:04 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/22 19:14:22 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
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
		result = nb * ft_recursive_power(nb, --power);
		i++;
	}
	return (result);
}
/* 
int	main(void)
{
	int a;
	int p;

	a = 2;
	p = 2;
	printf("Potencia de %i elevado a %i es: %i\n", a, p, ft_recursive_power(a, p));
	return (0);
} */