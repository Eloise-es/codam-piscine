/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:54:15 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/24 15:37:20 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char str1[13] = "cheesy";
    char str2[] = "cheese";
    char str3[13] = "cheesy";
    char str4[] = "cheese";
    char*	result;
    char*	result2;

	printf("\nStart:");
	printf("\nString 1 = %s\nString 2 = %s\n\n", str1, str2);

    printf("\nMy function:");
    result = ft_strcat(str1, str2);
    printf("\nStr 1 = %s\nStr 2 = %s\nResult = %s\n\n", str1, str2, result);

    printf("Real function:");
    result2 = strcat(str3, str4);
    printf("\nStr 1 = %s\nStr 2 = %s\nResult = %s\n\n", str3, str4, result2);
}
*/
// Find the end of the destination string
// Append characters from the source string to the destination string
// Add a null terminator to mark the end of the concatenated string