/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:19:07 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/16 15:10:57 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*f_f_lowcase(char *str)
{
	int	i;

	i = 0;
	if ((str[i] >= 'a') && (str[i] <= 'z'))
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	f_f_lowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] < 48 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((str[i - 1] > 57 && str[i - 1] < 65)
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((str[i - 1] > 90 && str[i - 1] < 97)
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((str[i - 1] > 122)
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "Salut, /commEnt :tu @vas 
		? 42mOts [quarante-deux; {cinquante+`et+un";

	ft_strcapitalize(str);
	printf("%s\n", str);
}
*/