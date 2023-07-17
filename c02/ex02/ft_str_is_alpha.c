/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:15:18 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/15 20:43:50 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{

	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			return (0);
		}
		str++;
	}
	return ( 1 );
}
// Currently only if all capslock characters

#include <stdio.h>

int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "hello";
	char	str3[] = "12345";
	char	str4[] = "hello12345";
	int	result;

	result = ft_str_is_alpha(str1);
	printf("String = %s\nResult = %d\n", str1, result);
	result = ft_str_is_alpha(str2);
	printf("String = %s\nResult = %d\n", str2, result);
	result = ft_str_is_alpha(str3);
	printf("String = %s\nResult = %d\n", str3, result);
	result = ft_str_is_alpha(str4);
	printf("String = %s\nResult = %d\n", str4, result);

}
