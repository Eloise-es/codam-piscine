/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:41 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/31 15:06:45 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*result;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	result = malloc (size * sizeof (int));
	i = 0;
	while (i < size)
	{
		result[i] = i + min;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	min = 1;
	int max = 20;
	int *result;

	result = ft_range(min, max);
	printf("\nMin: %d\nMax: %d\n\nReturned by function:\n", min, max);
	
	if (result) {
        // Print the elements of the array
        for (int i = 0; i < max - min; i++) {
            printf("%d ", result[i]);
        }
		printf("\n");
    } else {
        printf("(NULL)\n");
    }
	printf("\n");
	return (0);
}
*/
/*
TASK
	Create a function ft_range which returns an array of ints. 
	This int array should contain all values between min and max.
		• Min included - max excluded.
		• If min´value is greater or equal to max’s value, 
		a null pointer should be returned.

MALLOC
     The malloc() function allocates size bytes of memory and 
	 returns a pointer to the allocated memory.
*/