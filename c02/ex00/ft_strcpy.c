/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:56:05 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/15 20:13:02 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[100];
	char	src[] = "This is a string";
	char*	result;

	printf("Before:\nsrc = '%s'\ndest = '%s'\n", src, dest);
	result = ft_strcpy(dest, src);
    printf("After:\nsrc = '%s'\ndest = '%s'\n", src, dest);
	printf("result = '%s'\n", result);
}
*/