/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:12:37 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/27 13:52:03 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	limit;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	limit = size - dest_len;
	if (size == 0)
		return (src_len);
	if (size <= dest_len)
		return (src_len + size);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && j < limit - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (dest_len < size)
		dest[i] = '\0';
	return (dest_len + src_len);
}

/*
int main(void)
{
    char str1[12] = "cheesy";
    char str2[] = "chipssssssss";
    char str3[12] = "cheesy";
    char str4[] = "chipssssssss";
	unsigned int	size;
    int	result;
    int	result2;
	size = 0;

	printf("\nStart:");
	printf("\nString 1 = %s\nString 2 = %s\n", str1, str2);

    printf("\nMy function:");
    result = ft_strlcat(str1, str2, size);
    printf("\nStr 1 = %s\nStr 2 = %s\nResult = %d\n\n", str1, str2, result);

    printf("Real function:");
    result2 = strlcat(str3, str4, size);
    printf("\nStr 1 = %s\nStr 2 = %s\nResult = %d\n\n", str3, str4, result2);
}
*/