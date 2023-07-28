/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:42:39 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/24 15:33:27 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	char	diff;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}

/*
#include <stdio.h>
#include <string.h>

int 	main(void)
{
	char str1[] = "cheesy";
	char str2[] = "cheese";
	int result;

	printf("\nMy function:");
	result = ft_strcmp(str1, str2);
	printf("\nString 1 = %s\nString 2 = %s\nResult = %d\n\n", str1, str2, result);
	
	printf("Real function:");
	result = strcmp(str1, str2);
	printf("\nString 1 = %s\nString 2 = %s\nResult = %d\n\n", str1, str2, result);
}
*/