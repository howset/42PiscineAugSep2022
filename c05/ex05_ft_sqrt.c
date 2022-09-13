/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:10:20 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/01 16:10:22 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	i = 1;
	while (i <= 46340)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
*/
int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	i = 1;
	while ((i * i) <= nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int res;

	res = ft_sqrt(2147395600); //46340
	//res = ft_sqrt(2147488281); //46341
	printf("Res:%d\n", res);
}

