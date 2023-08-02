/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:26:35 by esalmon           #+#    #+#             */
/*   Updated: 2023/08/01 17:44:03 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	sq;

	i = 1;
	sq = 1;
	if (nb <= 0 || nb == 2)
		return (0);
	while (i * i < nb)
		i++;
	if ((nb % i) == 0)
		return (i);
	else
		return (0);
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
	
	printf("\nNumber = %d	Square root = %d\n\n", nb, ft_sqrt(nb));
}
*/