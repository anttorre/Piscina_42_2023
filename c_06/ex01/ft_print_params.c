/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:10:26 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/21 12:28:23 by anttorre         ###   ########.fr       */
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
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i] != NULL)
		{
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
