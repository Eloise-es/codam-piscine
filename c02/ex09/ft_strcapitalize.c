/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:25:06 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/20 16:05:28 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
		{
			str[j] += 32;
		}
		j++;
	}
}

int	is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if ((str[0] >= 'a') && (str[0] <= 'z'))
	{
		str[0] -= 32;
	}
	while (str[i] != '\0') 
	{
		if (is_alphanumeric(str[i - 1]) == 0) 
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "hello woRld";
	char	str2[] = "HELLO;how/are 'you'";
	char	str3[] = "salut, comment tu vas ? 42mots quarante%deux; cinquante+et+un";
	char	str4[] = "yet=another?teST> here.";
	char	str5[] = "This-is-a-tESt/string";

	printf("\nString before function = %s\n", str1);
	printf("Function return value = %s\n", ft_strcapitalize(str1));
	printf("String after function = %s\n\n", str1);

	printf("\nString before function = %s\n", str2);
	printf("Function return value = %s\n", ft_strcapitalize(str2));
	printf("String after function = %s\n\n", str2);

	printf("\nString before function = %s\n", str3);
	printf("Function return value = %s\n", ft_strcapitalize(str3));
	printf("String after function = %s\n\n", str3);

	printf("\nString before function = %s\n", str4);
	printf("Function return value = %s\n", ft_strcapitalize(str4));
	printf("String after function = %s\n\n", str4);

	printf("\nString before function = %s\n", str5);
	printf("Function return value = %s\n", ft_strcapitalize(str5));
	printf("String after function = %s\n\n", str5);

}
*/