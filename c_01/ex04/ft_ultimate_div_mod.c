/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:48:05 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/11 12:44:00 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_a;
	int	aux_b;

	aux_a = *a;
	aux_b = *b;
	*a = aux_a / aux_b;
	*b = aux_a % aux_b;
}
/*
int	main(void)
{
	int a;
	int b;

	a = 17;
	b = 6;

	ft_ultimate_div_mod(&a, &b);
	printf("Division de %d/%d es: ", a, b );
	printf("%d y el modulo es: %d\n", a, b);
}
*/
