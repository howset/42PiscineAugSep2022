/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:13:29 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/19 12:13:33 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_chars(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 48;
	y = 49;
	z = 50;
	while (x <= 55)
	{
		while (y <= 56)
		{
			while (z <= 57)
			{
				write_chars(x, y, z);
				if (x < 55)
					write(1, ", ", 2);
				z++;
			}
			y++;
			z = y + 1;
		}
		x++;
		y = x;
	}
}

//int main(void)
//{
//	ft_print_comb();
//}
