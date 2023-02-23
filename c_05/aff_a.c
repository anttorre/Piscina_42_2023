/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:55:03 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/23 18:58:21 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				write(1, "\n", 1);
				break ;
			}
			else
			{
				write(1, "a", 1);
				write(1, "\n", 1);
				break ;
			}
			i++;
		}
	}
	else
	{
		write(1, "a", 1);
		write(1, "\n", 1);
	}
	return (0);
}
