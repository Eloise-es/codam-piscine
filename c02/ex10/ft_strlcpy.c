/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:42:11 by esalmon           #+#    #+#             */
/*   Updated: 2023/08/01 17:09:21 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[15];
	char	src[] = "This is a test string";
	char	dest2[15];
	char	src2[] = "This is a test string";
	int		size;
	int		result;
	int i;

	size = 15;

	printf("\n........Real function........\n");
	printf("\nBefore:\nsrc = '%s'\nn = %d\n", src, size);
	result = strlcpy(dest, src, size);
    printf("\nAfter:\nsrc = '%s'\nResult = %d\n", src, result);
	printf("dest = %s\ndest in memory = ", dest);
	i = 0;
	// Prints the result as stored in memory, including null characters
    while (i < size)
	{
		if (dest[i] == 0)
		{
  			printf("\\0");
		}
        else
		{
			printf("%c", dest[i]);
		}
		i++;
	}
	printf("\n\n");

	printf("\n........My function........\n");
	printf("\nBefore:\nsrc = '%s'\nn = %d\n", src2, size);
	result = ft_strlcpy(dest2, src2, size);
    printf("\nAfter:\nsrc = '%s'\nResult = %d\n", src2, result);
	printf("dest = %s\ndest in memory = ", dest2);
	i = 0;
	// Prints the result as stored in memory, including null characters
    while (i < size)
	{
		if (dest2[i] == 0)
		{
  			printf("\\0");
		}
        else
		{
			printf("%c", dest2[i]);
		}
		i++;
	}
	printf("\n\n");
}
*/