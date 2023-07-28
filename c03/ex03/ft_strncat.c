/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:54:18 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/24 15:38:15 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
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
	unsigned int	nb;
    char*	result;
    char*	result2;
	nb = 4;

	printf("\nStart:");
	printf("\nString 1 = %s\nString 2 = %s\n\n", str1, str2);

    printf("\nMy function:");
    result = ft_strncat(str1, str2, nb);
    printf("\nStr 1 = %s\nStr 2 = %s\nResult = %s\n\n", str1, str2, result);

    printf("Real function: %s", str3);
    result2 = strncat(str3, str4, nb);
    printf("\nStr 1 = %s\nStr 2 = %s\nResult = %s\n\n", str3, str4, result2);
}
*/
// Find the end of the destination string
// Append characters from the source string to the destination string
// Add a null terminator to mark the end of the concatenated string