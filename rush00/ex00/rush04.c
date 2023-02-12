/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-p <aperez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:57:19 by aperez-p          #+#    #+#             */
/*   Updated: 2023/02/05 18:57:38 by aperez-p         ###   ########.fr       */
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
			if ((r == 1 && c == 1) || (r == y && c == x && c != 1 && r != 1))
				ft_putchar('A');
			else if ((r == y && c == 1) || (r == 1 && c == x))
				ft_putchar('C');
			else if ((r != 1 && r != y) && (c != 1 && c != x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			c++;
		}
		if (x > 0 && y > 0)
			write(1, "\n", 1);
		r++;
	}
}
