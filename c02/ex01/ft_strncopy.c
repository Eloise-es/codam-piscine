/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:48:09 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/15 20:13:14 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*start;
	int		i;

	start = dest;
	i = 0;
	while (i <= n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
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
	int	size;
	char*	result;

	size = 10;

	printf("Before:\nsrc = '%s'\ndest = '%s'\n", src, dest);
	result = ft_strncpy(dest, src, size);
    printf("After:\nsrc = '%s'\ndest = '%s'\n", src, dest,);
	printf("result = '%s'\n", result);
}
*/
