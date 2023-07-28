/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 07:49:22 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/18 08:55:40 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count_printable;
	int	length;

	count_printable = 0;
	length = 0;
	while (*str != '\0')
	{
		if (*str >= ' ' && *str <= '~')
		{
			count_printable++;
		}
		str++;
		length++;
	}
	if (count_printable == length)
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
	char	str4[] = "␀␂";
	char	str5[] = "␕hello";
	char	str6[] = "";
	int	result;

	result = ft_str_is_printable(str1);
	printf("String = '%s'\nResult = %d\n", str1, result);
	result = ft_str_is_printable(str2);
	printf("String = '%s'\nResult = %d\n", str2, result);
	result = ft_str_is_printable(str3);
	printf("String = '%s'\nResult = %d\n", str3, result);
	result = ft_str_is_printable(str4);
	printf("String = '%s'\nResult = %d\n", str4, result);
	result = ft_str_is_printable(str5);
	printf("String = '%s'\nResult = %d\n", str5, result);
	result = ft_str_is_printable(str6);
	printf("String = '%s'\nResult = %d\n", str6, result);

}
*/
