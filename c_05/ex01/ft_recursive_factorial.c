/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:49:42 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/23 18:17:26 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	return (i = nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int nb;

	nb = 9;
	printf("Factorial de %i: %i", nb, ft_recursive_factorial(nb));
}