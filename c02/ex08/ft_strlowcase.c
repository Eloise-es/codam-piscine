/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:16:24 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/20 14:22:59 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello world";
	char	str2[] = "HELLO";
	char	str3[] = "This is a TEST string";
	char	str4[] = "testinG....";
	char	str5[] = "hello 12345£(*)£$!£YI/';[]E";
	char*	result;

	printf("\nBefore function = %s\n", str1);
	result = ft_strlowcase(str1);
	printf("After function = %s\nResult = %s\n\n", str1, result);
	printf("Before function = %s\n", str2);
	result = ft_strlowcase(str2);
	printf("After function = %s\nResult = %s\n\n", str2, result);
	printf("Before function = %s\n", str3);
	result = ft_strlowcase(str3);
	printf("After function = %s\nResult = %s\n\n", str3, result);
	printf("Before function = %s\n", str4);
	result = ft_strlowcase(str4);
	printf("After function = %s\nResult = %s\n\n", str4, result);
	printf("Before function = %s\n", str5);
	result = ft_strlowcase(str5);
	printf("After function = %s\nResult = %s\n\n", str5, result);

}
*/