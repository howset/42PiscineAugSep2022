/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:02:03 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/03 15:02:05 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (!p)
		return (0);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
/*
#include <stdio.h>
int	main(void)
{
	int *res;
	int i = 0;
	int min = -12;
	int max = 5;
	int len;
	
	len = max-min;
	res = ft_range(min, max);
	while (i < len)
	{
		printf("Res ft:%d\n", res[i]);
		i++;
	}
	return (0);
}
*/
