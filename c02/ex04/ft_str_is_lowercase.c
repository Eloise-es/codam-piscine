/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 07:35:37 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/18 07:39:38 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	count_true;
	int	length;

	count_true = 0;
	length = 0;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			count_true++;
		}
		str++;
		length++;
	}
	if (count_true == length)
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
	char	str4[] = "hello12345";
	char	str5[] = "hello 12345";
	int	result;

	result = ft_str_is_lowercase(str1);
	printf("String = %s\nResult = %d\n", str1, result);
	result = ft_str_is_lowercase(str2);
	printf("String = %s\nResult = %d\n", str2, result);
	result = ft_str_is_lowercase(str3);
	printf("String = %s\nResult = %d\n", str3, result);
	result = ft_str_is_lowercase(str4);
	printf("String = %s\nResult = %d\n", str4, result);
	result = ft_str_is_lowercase(str5);
	printf("String = %s\nResult = %d\n", str5, result);

}
*/
