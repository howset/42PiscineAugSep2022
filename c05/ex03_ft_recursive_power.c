/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:36:34 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/01 14:36:37 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power == 0 && nb == 0)
		return (res = 1);
	if (power < 0 || nb == 0)
		return (res = 0);
	else if (power == 0)
		return (res = 1);
	res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int res;
	
	res = ft_recursive_power(4,3);
	printf("Res:%d\n", res);
}
*/
