/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:16:52 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/23 18:25:47 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	i = nb;
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}

/* int	main(void)
{
	int	a;

	a = 9;
	printf("Factorial de %i: %i", a, ft_iterative_factorial(a));
	return (0);
} */
