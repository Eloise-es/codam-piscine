/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:48:09 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/20 16:29:53 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char dest[50];
	char src[] = "This is a test string";
	char dest2[50];
	char src2[] = "This is a test string";
	int size;
	char *result;
	int i;

	// Test one (n smaller than string length)
	printf("\nTEST 1: n smaller than string length\n");
	size = 14;
	printf("\nBefore:\nsrc = '%s'\ndest = '%s'\nn = %d\n", src, dest, size);
	result = ft_strncpy(dest, src, size);
	printf("\nAfter:\nsrc = '%s'\ndest = '%s'\n", src, dest);
	printf("dest as stored in memory = ");
	i = 0;
	// Prints the result as stored in memory, including null characters
	while (i <= size)
	{
		if (result[i] == 0)
		{
			printf("\\0");
		}
		else
		{
			printf("%c", result[i]);
		}
		i++;
	}
	printf("\n\n");

	// Test two (n bigger than string length)
	printf("\nTEST 2: n bigger than string length\n");
	size = 25;
	printf("\nBefore:\nsrc = '%s'\ndest = '%s'\nn = %d\n", src2, dest2, size);
	result = ft_strncpy(dest2, src2, size);
	printf("\nAfter:\nsrc = '%s'\ndest = '%s'\n", src2, dest2);
	printf("dest as stored in memory = ");
	i = 0;
	// Prints the result as stored in memory, including null characters
	while (i <= size)
	{
		if (result[i] == 0)
		{
			printf("\\0");
		}
		else
		{
			printf("%c", result[i]);
		}
		i++;
	}
	printf("\n\n");
}
*/