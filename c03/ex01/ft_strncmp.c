/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:09:18 by eloiseisgr8       #+#    #+#             */
/*   Updated: 2023/07/21 13:14:46 by eloiseisgr8      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main(void)
{
    char str1[] = "16,7";
    char str2[] = "16,7";
    int result;
    int n;

    n = 10;

    printf("\nMy function: (n = %d)", n);
    result = ft_strncmp(str1, str2, n);
    printf("\nStr 1 = %s\nStr 2 = %s\nResult = %d\n\n", str1, str2, result);

    printf("Real function: (n = %d)", n);
    result = strncmp(str1, str2, n);
    printf("\nStr 1 = %s\nStr 2 = %s\nResult = %d\n\n", str1, str2, result);
}
*/