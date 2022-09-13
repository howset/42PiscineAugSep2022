/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <hsetyamu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:08:30 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/18 14:08:50 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	a;

	if (nb >= 0 && nb < 10)
	{
		a = nb + '0';
		ft_putchar(a);
	}
	else if (nb >= 10)
	{
		a = (nb / 10);
		ft_putnbr(a);
		a = (nb % 10) + '0';
		ft_putchar(a);
	}
	else
	{
		ft_putchar('-');
		a = (nb * -1);
		ft_putnbr(a);
	}
}

//int main(void)
//{
//	ft_putnbr(-11);
//}
