/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chezerio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:52:21 by chezerio          #+#    #+#             */
/*   Updated: 2022/08/20 11:52:28 by chezerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	first_row(int x)
{
	int	cnt;

	ft_putchar('A');
	cnt = 1;
	while (cnt < x - 1)
	{
		ft_putchar('B');
		cnt++;
	}
	if (x != 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
	return (1);
}

int	lr_cols(int x, int y)
{
	int	cnt;
	int	cnt2;

	cnt = 1;
	while (cnt < y - 1)
	{
		ft_putchar('B');
		cnt2 = 1;
		while (cnt2 < x - 1)
		{
			ft_putchar(' ');
			cnt2++;
		}
		if (x != 1)
		{
			ft_putchar('B');
		}
			cnt++;
		ft_putchar('\n');
	}
	return (1);
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Please enter values bigger than 0.\n", 37);
		return ;
	}
	first_row(x);
	lr_cols(x, y);
	if (y != 1)
	{
		first_row(x);
	}
}
