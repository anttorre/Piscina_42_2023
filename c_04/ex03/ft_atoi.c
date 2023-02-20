/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:14:02 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/20 11:54:25 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    
}

int	main(int argc, char const *argv[])
{
	if (argc > 1)
	{
        int a = atoi(argv[1]);
		printf("%d\n", a);
	}
	return (0);
}
