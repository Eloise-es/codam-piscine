/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barany <barany@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:15:20 by barany            #+#    #+#             */
/*   Updated: 2023/07/15 16:40:03 by barany           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	row(int x, int first)
{
	int	i;
	int	letter;

	i = 0;
	letter = 'C';
	if (first == 1)
	{
		letter = 'A';
	}
	ft_putchar(letter);
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar(letter);
	}
	ft_putchar('\n');
}

void	middle(int x, int y)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (k < y - 2)
	{
		ft_putchar('B');
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		k++;
		i = 0;
	}
}

void	rush(int x, int y)
{
	if (y == 1)
	{
		row(x, 1);
	}
	else
	{
		row(x, 1);
		middle(x, y);
		row(x, 0);
	}
}
