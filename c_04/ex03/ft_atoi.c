/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:14:02 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/20 18:43:16 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	sign;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] <= ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (sign * num);
}
/* 
int	main(int argc, char *argv[])
{
	int	a;

	if (argc > 1)
	{
		a = ft_atoi(argv[1]);
		printf("%d\n", a);
	}
	return (0);
}
 */