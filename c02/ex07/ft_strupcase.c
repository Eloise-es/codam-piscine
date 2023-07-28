/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 08:56:54 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/20 14:19:04 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
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
	char	str2[] = "hello";
	char	str3[] = "This is a tESt string";
	char	str4[] = "";
	char	str5[] = "hello 12345";
	char*	result;

	printf("Before function = %s\n", str1);
	result = ft_strupcase(str1);
	printf("After function = %s\nResult = %s\n\n", str1, result);
	printf("Before function = %s\n", str2);
	result = ft_strupcase(str2);
	printf("After function = %s\nResult = %s\n\n", str2, result);
	printf("Before function = %s\n", str3);
	result = ft_strupcase(str3);
	printf("After function = %s\nResult = %s\n\n", str3, result);
	printf("Before function = %s\n", str4);
	result = ft_strupcase(str4);
	printf("After function = %s\nResult = %s\n\n", str4, result);
	printf("Before function = %s\n", str5);
	result = ft_strupcase(str5);
	printf("After function = %s\nResult = %s\n\n", str5, result);

}
*/