/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:13:39 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/03 12:13:41 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (nb % i != 0)
	{
		i++;
	}
	if (i == nb)
		return (1);
	else
		return (0);
}

int	ft_find_prime(int nb)
{
	int	i;

	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		i = 2;
		nb++;
		while (nb % i != 0)
		{
			i++;
		}
		if (i == nb)
			return (i);
	}
	return (ft_find_prime(nb++));
}
/*
#include <stdio.h>
int	main(void)
{
	int res;

	res = ft_find_prime(20);
	printf("Res=%d\n", res);
}
*/
