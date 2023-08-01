/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:10:19 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/31 19:01:22 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	i;

	total_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
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
	return (start);
}

char	*ft_concatinate(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*result;

	result = (char *)malloc(ft_total_length(size, strs, sep) + 1);
	if (result == NULL)
	{
		printf("Memory not allocated");
		return (NULL);
	}
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(&result[j], strs[i]);
		j += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(&result[j], sep);
			j += ft_strlen(sep);
		}
		i++;
	}
	result[ft_total_length(size, strs, sep)] = '\0';
	return (&result[0]);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(1);
		result[0] = '\0';
		return (result);
	}
	else
		return (ft_concatinate(size, strs, sep));
}
/*
int	main(void)
{
	int size = 3;
	char sep[] = " ";
	char *strs[] = {"hello", "world", "123", NULL};
	int i = 0;

	while (i < size)
	{
		printf("\nString %d: %s", i, strs[i]);
		i++;
	}
	
	printf("\nResult = %s\n\n", ft_strjoin(size, strs, sep));
}
*/