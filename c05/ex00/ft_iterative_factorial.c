/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:22:06 by esalmon           #+#    #+#             */
/*   Updated: 2023/08/01 14:12:04 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	factorial = nb;
	while (i < nb)
	{
		factorial = factorial * (nb - i);
		i++;
	}
	return (factorial);
}

/*
int	main(int argc, char *argv[])
{
	int nb;
	if (argc > 1)
	{
		nb = atoi(argv[1]);
	}
	else nb = 5;
	
	printf("\n\nNumber = %d	Factorial = %d\n\n", nb, ft_iterative_factorial(nb));
}
*/