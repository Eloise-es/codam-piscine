/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:29:01 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/31 15:01:19 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(src) + 1;
	dup = (char *)malloc(len);
	if (dup != NULL)
	{
		ft_strcpy(dup, src);
		return (dup);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	src[] = "String to duplicate";
	char	*result;

	result = ft_strdup(src);
	printf("\nOriginal string: %s\nDuplicate string: %s\n\n", src, result);
}
*/

/*
NAME
     strdup, strndup -- save a copy of a string

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <string.h>

     char *
     strdup(const char *s1);

     char *
     strndup(const char *s1, size_t n);

DESCRIPTION
     The strdup() function allocates sufficient memory for a copy of the
     string s1, does the copy, and returns a pointer to it.  The pointer may
     subsequently be used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to
     ENOMEM.

     The strndup() function copies at most n characters from the string s1
     always NUL terminating the copied string.

MALLOC
     The malloc() function allocates size bytes of memory and returns a
     pointer to the allocated memory.
*/