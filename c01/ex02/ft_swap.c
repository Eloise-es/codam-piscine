/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: esalmon <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/13 11:05:33 by esalmon       #+#    #+#                 */
/*   Updated: 2023/07/14 14:28:37 by esalmon       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int b;
	int* ptra;
	int* ptrb;

	a = 10;
	b = 20;
	ptra  = &a;
	ptrb = &b;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(ptra, ptrb);
	printf("New value of a = %d\n", a);
	printf("New value of b = %d\n", b);
}
*/
