/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: esalmon <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/13 12:12:01 by esalmon       #+#    #+#                 */
/*   Updated: 2023/07/14 14:29:17 by esalmon       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int*	ptrdiv;
	int*	ptrmod;

	a = 10;
	b = 3;
	ptrdiv = &div;
	ptrmod = &mod;

	ft_div_mod(a, b, ptrdiv, ptrmod);
	printf("Test 1:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);	

	a = 147;
	b = 5;

	ft_div_mod(a, b, ptrdiv, ptrmod);
	printf("Test 2:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);	
}
*/
