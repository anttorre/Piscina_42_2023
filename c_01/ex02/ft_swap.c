/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:59:23 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/09 20:06:06 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
int	main(void)
{
	int	n1;
	int	n2;

	n1 = 12;
	n2 = 21;
	ft_swap(&n1, &n2);
	printf("n1 valia 12 y ahora vale: %d\n", n1);
	printf("n2 valia 21 y ahora vale: %d\n", n2);
	ft_swap(&n2, &n1);
	printf("n1 valia 12 y ahora vale : %d\n", n1);
	printf("n2 valia 21 y ahora vale : %d\n", n2);
}
*/
