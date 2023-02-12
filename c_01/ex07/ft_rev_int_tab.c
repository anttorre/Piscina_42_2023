/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:19:09 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/11 16:00:30 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < size)
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = aux;
		i++;
		size--;
	}
}
/*
int	main(void)
{
	int	arr_int[5] = {1, 2, 3, 4, 5};
	int size = 5;
	int i = 0;

	ft_rev_int_tab(arr_int, size);
	printf("Array = [");
	while(i < size)
	{
		if(i <  (size - 1))
			printf("%d,", arr_int[i]);
		else
			printf("%d", arr_int[i]);
		i++;
	}
	printf("]\n");
}
*/
