/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:12:41 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/27 14:20:24 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>

int	main(void)
{
	char	str[]  = "This is a string!!!";
	char	str2[] = "Another one";
	int	length;

	length = ft_strlen(str);
	printf("The string '%s' is %d characters long.\n", str, length);
	length = ft_strlen(str2);
	printf("The string '%s' is %d characters long.\n", str2, length);
}
*/