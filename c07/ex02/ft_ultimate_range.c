/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:41:06 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/31 16:06:11 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc (size * sizeof (int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = i + min;
		i++;
	}
	return (size);
}
/*
int	main(void)
{
	int	min = 12;
	int max = 20;
	int result;
	int *range;

	result = ft_ultimate_range(&range, min, max);
	printf("\nMin: %d\nMax: %d\n\nReturned by function: %d\n", min, max, result);
	
	printf("Range: ");
	if (range) {
        // Print the elements of the array
        for (int i = 0; i < max - min; i++) {
            printf("%d ", range[i]);
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
The size of range should be returned (or -1 on error).
		• If the value of min is greater or equal to max’s value, 
		range will point on NULL and it should return 0.

MALLOC
     The malloc() function allocates size bytes of memory and 
	 returns a pointer to the allocated memory.
*/