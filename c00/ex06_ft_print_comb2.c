/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <hsetyamu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:08:30 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/18 14:08:50 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	x;
	int	y;
	int	plc_hldr;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			plc_hldr = x / 10 + '0';
			write(1, &plc_hldr, 1);
			plc_hldr = x % 10 + '0';
			write(1, &plc_hldr, 1);
			write(1, " ", 1);
			plc_hldr = y / 10 + '0';
			write(1, &plc_hldr, 1);
			plc_hldr = y % 10 + '0';
			write(1, &plc_hldr, 1);
			if (x < 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}

//int main(void)
//{
//	ft_print_comb2();
//}
