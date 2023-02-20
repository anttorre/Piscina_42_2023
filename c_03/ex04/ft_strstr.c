/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:37:42 by anttorre          #+#    #+#             */
/*   Updated: 2023/02/20 10:09:37 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char	*str;
	char	*to_find;
	char	*ptr;

	str = "Fo Fo Bar Fo";
	to_find = "";
	ptr = ft_strstr(str, to_find);
	//ptr = strstr(str, to_find);
	printf("%s\n", ptr);
}
  */