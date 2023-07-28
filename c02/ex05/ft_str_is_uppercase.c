/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 07:40:04 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/20 13:59:58 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	count_uppercase;
	int	i;

	count_uppercase = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count_uppercase++;
		}
		i++;
	}
	if (count_uppercase == i)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "hello";
	char	str3[] = "12345";
	char	str4[] = "Hello12345";
	char	str5[] = "";
	int	result;

	result = ft_str_is_uppercase(str1);
	printf("String = %s\nResult = %d\n", str1, result);
	result = ft_str_is_uppercase(str2);
	printf("String = %s\nResult = %d\n", str2, result);
	result = ft_str_is_uppercase(str3);
	printf("String = %s\nResult = %d\n", str3, result);
	result = ft_str_is_uppercase(str4);
	printf("String = %s\nResult = %d\n", str4, result);
	result = ft_str_is_uppercase(str5);
	printf("String = %s\nResult = %d\n", str5, result);
}
*/