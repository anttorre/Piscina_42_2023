/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:33:35 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/21 12:28:21 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char const *argv[])
{
	int	arg_length;

	arg_length = ft_strlen(argv[0]);
	if (argc == 1)
		write(1, argv[0], arg_length);
	write(1, "\n", 1);
	return (0);
}
