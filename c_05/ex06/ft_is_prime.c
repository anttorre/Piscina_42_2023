/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:29:00 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/23 18:29:37 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	a;
	long	primes;

	a = 1;
	primes = 0;
	if (nb == 1 || nb == 0)
		return (0);
	while (a <= nb)
	{
		if (nb % a == 0)
			primes++;
		a++;
	}
	if (primes <= 2)
		return (1);
	return (0);
}

/* int	main(void)
{
	int a;

	a = 1;
	printf("%i es %i\n", a, ft_is_prime(a));
} */