/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:29:40 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/11 19:33:46 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
			i++;
	}
}
/*
int	main(void)
{
	int	arr[8] = {5, 2, 1, 3, 4, 9, 7, 6};
	int	size = sizeof(arr) / sizeof(arr[0]);
	int	i = 0;
	ft_sort_int_tab(arr, size);
	printf("Array = [");
	while(i < size)
	{
		if(i <  (size - 1))
			printf("%d, ", arr[i]);
		else
			printf("%d", arr[i]);
		i++;
	}
	printf("]\n");
}
*/
