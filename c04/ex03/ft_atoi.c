/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:47:29 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/27 14:20:47 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	nb1[] = "425";
	char	nb2[] = " -425";
	char	nb3[] = "12ef";
	char	nb4[] = "  +678";
	char	nb5[] = " -6842";
	char	nb6[] = "---+--+1234ab567";
	int result;

	printf("\nReal function....");
	result = atoi(nb1);
	printf("\nString: %s	Number: %d\n", nb1, result);
	result = atoi(nb2);
	printf("\nString: %s	Number: %d\n", nb2, result);
	result = atoi(nb3);
	printf("\nString: %s	Number: %d\n", nb3, result);
	result = atoi(nb4);
	printf("\nString: %s	Number: %d\n", nb4, result);
	result = atoi(nb5);
	printf("\nString: %s	Number: %d\n", nb5, result);
	result = atoi(nb6);
	printf("\nString: %s	Number: %d\n", nb6, result);
	printf("\nMy function....");
	result = ft_atoi(nb1);
	printf("\nString: %s	Number: %d\n", nb1, result);
	result = ft_atoi(nb2);
	printf("\nString: %s	Number: %d\n", nb2, result);
	result = ft_atoi(nb3);
	printf("\nString: %s	Number: %d\n", nb3, result);
	result = ft_atoi(nb4);
	printf("\nString: %s	Number: %d\n", nb4, result);
	result = ft_atoi(nb5);
	printf("\nString: %s	Number: %d\n", nb5, result);
	result = ft_atoi(nb6);
	printf("\nString: %s	Number: %d\n\n", nb6, result);

}
*/