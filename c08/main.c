/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:17:21 by esalmon           #+#    #+#             */
/*   Updated: 2023/08/02 23:27:52 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// // EX00
// #include "./ex00/ft.h"

// int	main(void)
// {
// 	int	a = 4;
// 	int b = 2;
// 	char str[] = "This is a string";
// 	char str1[] = "cheesy";
// 	char str2[] = "cheese";

// 	ft_putchar('z');
// 	ft_putchar('\n');
// 	ft_swap(&a, &b);
// 	ft_putstr(str);
// 	ft_putchar('\n');
// 	printf("\nString 1 = %s\nString 2 = %s\n
// Result = %d\n\n", str1, str2, ft_strcmp(str1, str2));
// 	printf("The string '%s' is %d characters long.\n\n", str, ft_strlen(str));
// }

// // EX01
// #include "./ex01/ft_boolean.h"

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		write(1, str++, 1);
// }

// t_bool	ft_is_even(int nbr)
// {
// 	return ((EVEN(nbr)) ? TRUE : FALSE);
// }

// int	main(int argc, char **argv)
// {
// 	(void)argv;
// 	if (ft_is_even(argc - 1) == TRUE)
// 		ft_putstr(EVEN_MSG);
// 	else
// 		ft_putstr(ODD_MSG);
// 	return (SUCCESS);
// }

// // EX02

// #include "./ex02/ft_abs.h"

// int	main(void)
// {
// 	int	num = -23;

// 	printf("\nnum = %d	ABS(num) = %d\n\n", num, ABS(num));
// }