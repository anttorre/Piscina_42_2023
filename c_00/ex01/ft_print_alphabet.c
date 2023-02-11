/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:33:14 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/08 14:59:22 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i >= 97 && i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
}
*/
