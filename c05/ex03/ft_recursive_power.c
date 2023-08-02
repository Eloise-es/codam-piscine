/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:48:51 by esalmon           #+#    #+#             */
/*   Updated: 2023/08/01 15:08:37 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
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
	nb, power, ft_recursive_power(nb, power));
}
*/