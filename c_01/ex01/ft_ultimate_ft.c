/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:42:01 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/11 13:13:06 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int	main(void)
{
	int	n;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********ptr9;

	n = 0;
	ptr1 = &n;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);
	printf("Contenido de la variable n: %i\n", n);
	printf("Contenido del puntero 9: %i\n", *********ptr9);
	printf("Direccion de memoria de la variable n: %p\n", &n);
	printf("Direccion de memoria que contiene el puntero 1: %p\n", ptr1);
	printf("Direccion de memoria del puntero 1: %p\n", &ptr1);
	printf("Direccion de memoria que contiene el puntero 2: %p\n", ptr2);
	printf("Direccion de memoria del puntero 2: %p\n", &ptr2);
	printf("Direccion de memoria que contiene el puntero 3: %p\n", ptr3);
	printf("Direccion de memoria del puntero 3: %p\n", &ptr3);
	printf("Direccion de memoria que contiene el puntero 4: %p\n", ptr4);
	printf("Direccion de memoria del puntero 4: %p\n", &ptr4);
	printf("Direccion de memoria que contiene el puntero 5: %p\n", ptr5);
	printf("Direccion de memoria del puntero 5: %p\n", &ptr5);
	printf("Direccion de memoria que contiene el puntero 6: %p\n", ptr6);
	printf("Direccion de memoria del puntero 6: %p\n", &ptr6);
	printf("Direccion de memoria que contiene el puntero 7: %p\n", ptr7);
	printf("Direccion de memoria del puntero 7: %p\n", &ptr7);
	printf("Direccion de memoria que contiene el puntero 8: %p\n", ptr8);
	printf("Direccion de memoria del puntero 8: %p\n", &ptr8);
	printf("Direccion de memoria que contiene el puntero 9: %p\n", ptr9);
}
