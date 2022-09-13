/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:06:43 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/01 11:06:48 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	if (nb < 0)
		return (res = 0);
	if (nb == 0 || nb == 1)
		return (res);
	i = 2;
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	int res;
	
	res = ft_iterative_factorial(3);
	printf("Res:%d\n", res);
}
*/
