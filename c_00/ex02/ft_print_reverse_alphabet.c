/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:57:46 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/07 20:09:49 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 122;
	while (i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
