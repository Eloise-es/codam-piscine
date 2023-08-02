/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:13:50 by esalmon           #+#    #+#             */
/*   Updated: 2023/08/01 15:06:41 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	result = nb;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*
int	main(int argc, char *argv[])
{
	int nb;
	int power;
	
	if (argc > 1)
		nb = atoi(argv[1]);
	else nb = 3;
	
	if (argc > 2)
		power = atoi(argv[2]);
	else power = 3;
	
	printf("\nNumber = %d	Power = %d	Result = %d\n\n", 
	nb, power, ft_iterative_power(nb, power));
}
*/
