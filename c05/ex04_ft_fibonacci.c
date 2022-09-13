/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:42:25 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/01 15:42:27 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	res = index;
	if (index < 0)
		return (res = -1);
	else if (index <= 1)
		return (res);
	else
		res = ft_fibonacci(res - 1) + ft_fibonacci(res - 2);
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int res;
	
	res = ft_fibonacci(8);
	printf("Res:%d\n", res);
}
*/
