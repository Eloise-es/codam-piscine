/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloiseisgr8 <eloiseisgr8@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:15:48 by esalmon           #+#    #+#             */
/*   Updated: 2023/07/28 00:19:28 by eloiseisgr8      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putmin(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putmin();
		return;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar('0' + nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
}

int main(void)
{
	int nb1 = 4;
	int nb2 = 121;
	int nb3 = 3555;
	int nb4 = -566689;
	int nb5 = -66784999;
	int nb6 = 456780004;

	write(1, "\n", 1);
	ft_putnbr(nb1);
	write(1, "\n", 1);
	ft_putnbr(nb2);
	write(1, "\n", 1);
	ft_putnbr(nb3);
	write(1, "\n", 1);
	ft_putnbr(nb4);
	write(1, "\n", 1);
	ft_putnbr(nb5);
	write(1, "\n", 1);
	ft_putnbr(nb6);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	write(1, "\n", 1);
}
