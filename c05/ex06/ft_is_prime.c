/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:45:25 by esalmon           #+#    #+#             */
/*   Updated: 2023/08/01 17:49:58 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(int argc, char *argv[])
{
	int nb;
	if (argc > 1)
	{
		nb = atoi(argv[1]);
	}
	else nb = 9;
	
	printf("\nNumber = %d	Is prime? = %d\n\n", nb, ft_is_prime(nb));
}
*/