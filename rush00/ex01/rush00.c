/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmon <esalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:15:20 by barany            #+#    #+#             */
/*   Updated: 2023/07/15 16:49:43 by esalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	row(int x)
{
	int	i;
	int	letter;

	i = 0;
	letter = 'o';
	ft_putchar(letter);
	while (i < x - 2)
	{
		ft_putchar('-');
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
		ft_putchar('|');
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (x > 1)
		{
			ft_putchar('|');
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
		row(x);
	}
	else
	{
		row(x);
		middle(x, y);
		row(x);
	}
}
