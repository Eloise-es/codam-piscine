/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:17:07 by esalmon           #+#    #+#             */
/*   Updated: 2023/08/01 17:43:25 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	int	sign;

	sign = 1;
	if (index < 0)
	{
		sign = -1;
		index *= -1;
	}
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (sign * ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
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
	
	printf("\nNumber = %d	Fibonacci = %d\n\n", nb, ft_fibonacci(nb));
}
*/