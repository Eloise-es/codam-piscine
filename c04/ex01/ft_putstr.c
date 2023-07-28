/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:13:43 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/27 14:20:31 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}
/*
int	main(void)
{
	char	greeting[] = "Hello!!!! ";
	char	str[]  = "This is another string.";

	write(1, "\n", 1);
	ft_putstr(greeting);
	ft_putstr(str);
	write(1, "\n", 1);
	write(1, "\n", 1);
}
*/