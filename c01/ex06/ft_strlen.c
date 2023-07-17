/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: esalmon <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/13 16:33:38 by esalmon       #+#    #+#                 */
/*   Updated: 2023/07/13 17:07:38 by esalmon       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[]  = "This is a string!!!";
	char*	strptr;
	int	length;

	strptr = &str[0];
	length = ft_strlen(strptr);
	printf("The string '%s' is %d characters long.\n", str, length);
}
*/
