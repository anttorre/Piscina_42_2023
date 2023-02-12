/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-p <aperez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:54:27 by aperez-p          #+#    #+#             */
/*   Updated: 2023/02/05 19:09:39 by aperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 || r == y) && (c == 1 || c == x))
				ft_putchar('o');
			else if (r == 1 || (r == y && c != x))
				ft_putchar('-');
			else if ((r != 1 && r != y) && (c != 1 && c != x))
				ft_putchar(' ');
			else
				ft_putchar('|');
			c++;
		}
		if (x > 0 && y > 0)
			write(1, "\n", 1);
		r++;
	}
}
