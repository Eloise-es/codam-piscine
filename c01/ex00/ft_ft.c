/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: esalmon <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/12 12:05:43 by esalmon       #+#    #+#                 */
/*   Updated: 2023/07/14 14:27:31 by esalmon       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
 #include <stdio.h>

int	main(void)
{
	int	number;
	int	*nbr;

	number = 10;
	printf("Original number: %d\n", number);
	nbr = &number;
	ft_ft(nbr);
	printf("Number after function called: %d\n", number);
	return (0);
}
*/
