/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:06:56 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/07 20:09:36 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	ascii;

	i = 0;
	while (i <= 9)
	{
		ascii = i + '0';
		write(1, &ascii, 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
