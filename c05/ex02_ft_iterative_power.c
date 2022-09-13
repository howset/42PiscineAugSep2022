/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:56:07 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/01 13:56:10 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	if (power == 0 && nb == 0)
		return (res = 1);
	if (power < 0 || nb == 0)
		return (res = 0);
	else if (power == 0)
		return (res = 1);
	i = 1;
	res = 1;
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int res;
	
	res = ft_iterative_power(3,4);
	printf("Res:%d\n", res);
}
*/
