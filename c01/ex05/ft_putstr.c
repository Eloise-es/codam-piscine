/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: esalmon <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/13 14:25:24 by esalmon       #+#    #+#                 */
/*   Updated: 2023/07/14 14:36:36 by esalmon       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	greeting[] = "Hello!!!!";
	char*	greetingPtr;
	char	str[]  = "This is another string.";
	char*	strPtr;

	greetingPtr = &greeting[0];
	strPtr = &str[0];

	ft_putstr(greetingPtr);
	ft_putstr(strPtr);
}
*/
