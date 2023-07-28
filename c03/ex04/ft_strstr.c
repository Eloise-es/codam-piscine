/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:01:13 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/27 13:51:00 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*
#include <string.h>

int main(void)
{
    char str1[] = "hell hell helloo";
    char str2[] = "hello";
    char str3[strlen(str1)];
    char str4[strlen(str2)];
    char*	result;
    char*	result2;

	strcpy(str3, str1);
	strcpy(str4, str2);

    printf("\nMy function:");
    result = ft_strstr(str1, str2);
    printf("\nStr 1 = %s\nStr 2 = %s\nResult = %s\n\n", str1, str2, result);

    printf("Real function:");
    result2 = strstr(str3, str4);
    printf("\nStr 1 = %s\nStr 2 = %s\nResult = %s\n\n", str3, str4, result2);
}
*/