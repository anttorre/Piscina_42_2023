/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:41:29 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/08 14:51:38 by anttorre         ###   ########.fr       */
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
	else if (nb < 0)
	{
		ft_putchar("-", 1);
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{	
		aux = nb + 48;
		ft_putchar(&aux, 1);
	}
}

/*
int	main(void)
{
	ft_putnbr(101);
	ft_putchar("\n", 1);
	ft_putnbr(-2147483647);
	ft_putchar("\n", 1);
	return (0);
}
*/
