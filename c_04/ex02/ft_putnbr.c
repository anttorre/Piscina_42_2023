/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:52:28 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/20 11:13:28 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c, int b)
{
	write(1, c, b);
}

void	ft_putnbr(int nb)
{
	char	aux;

	if (nb == -2147483648)
		ft_putchar("-2147483648", 11);
	else if (nb >= 0 && nb <= 9)
	{
		aux = nb + '0';
		ft_putchar(&aux, 1);
	}
	else if (nb < 0)
	{
		ft_putchar("-", 1);
		nb *= -1;
		ft_putnbr(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar("\n", 1);
	ft_putnbr(101);
	ft_putchar("\n", 1);
	ft_putnbr(-25);
	ft_putchar("\n", 1);
	ft_putnbr(100);
	return (0);
}
