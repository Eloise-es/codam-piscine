/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: esalmon <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/13 17:15:13 by esalmon       #+#    #+#                 */
/*   Updated: 2023/07/13 18:10:30 by esalmon       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	n;

	i = 0;
	n = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[n];
		tab[n] = temp;
		i++;
		n--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	int size = 5;
	int*	tab;
	int	j;
	int	k;

	tab = &array[0];
	j = 0;
	k = 0;

	printf("Array before function:\n");

	while (j < size)
	{
		printf("%d", tab[j]);
		j++;
	}

	ft_rev_int_tab(tab, size);
	printf("Array after function:\n");

	while (k < size)
	{
		printf("%d", tab[k]);
		k++;
	}
}
*/
