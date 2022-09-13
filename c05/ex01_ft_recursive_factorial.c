/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:54:00 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/01 12:54:03 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (res = 0);
	if (nb == 0 || nb == 1)
		return (res = 1);
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int res;
	
	res = ft_recursive_factorial(-1);
	printf("Res:%d\n", res);
}
*/
