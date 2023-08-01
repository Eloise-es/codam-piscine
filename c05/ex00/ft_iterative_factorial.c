/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:22:06 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/27 18:03:19 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb)
{
	int	factorial;
	int i;

	i = 1;
	factorial = nb;

	while(i < nb)
	{
		factorial = factorial * (nb - i);
		printf("%d", i);
		i++;
	}
	return (factorial);
}


int	main(int argc, char *argv[])
{
	int nb;
	if (argc > 1)
	{
		nb = *argv[1];
		nb = atoi(nb);
	}
	else nb = 5;
	
	printf("\n\nNumber = %d	Factorial = %d\n\n", nb, ft_iterative_factorial(nb));
}