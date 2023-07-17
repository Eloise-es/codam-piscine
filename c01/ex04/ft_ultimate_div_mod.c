/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: esalmon <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/13 13:51:38 by esalmon       #+#    #+#                 */
/*   Updated: 2023/07/14 14:29:54 by esalmon       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a % *b;
	*a = *a / *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int*	ptra;
	int*	ptrb;

	ptra = &a;
	ptrb = &b;

	printf("Test 1:\n");
	a = 10;
	b = 3;
	printf("Before function:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod(ptra, ptrb);
	printf("After function:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	printf("Test 2:\n");
	a = 124;
	b = 5;
	printf("Before function:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod(ptra, ptrb);
	printf("After function:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
*/
