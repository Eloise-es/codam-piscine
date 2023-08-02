/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:48:09 by esalmon           #+#    #+#             */
/*   Updated: 2023/08/01 17:12:01 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

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
#include <string.h>

int	main(void)
{
	char	dest[40];
	char	src[] = "This is a test string";
	char	dest2[40];
	char	src2[] = "This is a test string";
	int	size;
	char*	result;
	int i;

	size = 14;

	printf("\n.....Real function.....\n");
	printf("\nBefore:\nsrc = '%s'\nn = %d\n", src, size);
	result = strncpy(dest, src, size);
    printf("\nAfter:\nsrc = '%s'\n", src);
	printf("dest = %s\ndest in memory = ", dest);
	i = 0;
	// Prints the result as stored in memory, including null characters
    while (i <= size + 1)
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

	printf("\n.....My function.....\n");
	printf("\nBefore:\nsrc = '%s'\nn = %d\n", src2, size);
	result = ft_strncpy(dest2, src2, size);
    printf("\nAfter:\nsrc = '%s'\n", src2);
	printf("dest = %s\ndest in memory = ", dest);
	i = 0;
	// Prints the result as stored in memory, including null characters
    while (i <= size + 1)
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