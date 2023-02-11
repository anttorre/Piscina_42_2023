/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:31:39 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/09 16:44:56 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	result_div;
	int	result_mod;

	a = 10;
	b = 2;
	ft_div_mod(a, b, &result_div, &result_mod);
	printf("La division de %d/%d es: %d\n", a, b, result_div);
	printf("El modulo de %d/%d es: %d\n", a, b, result_mod);
}
*/
