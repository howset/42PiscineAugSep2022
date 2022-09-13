/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:21:19 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/03 15:21:21 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*buff;
	int	i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	buff = (int *)malloc(sizeof(*buff) * len + 1);
	if (!buff)
	{
		*range = 0;
		return (-1);
	}
	*range = buff;
	i = 0;
	while (i < len)
	{
		buff[i] = min + i;
		i++;
	}
	return (len);
}

/*
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * (len));
	if (!*range)
		return (-1);
	i = 0;
	while (min <= max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (len);
}
*/
/*
#include <stdio.h>
int	main(void)
{
	int res;
	int *range;
	int i = 0;
	int min = 5;
	int max = 12;
	int len;
	
	len = max-min;
	res = ft_ultimate_range(&range, min, max);
	printf("Len ft:%d\n", res); //res is len
	while (i < len)
	{
		printf("Res ft:%d\n", range[i]);
		i++;
	}
	return (0);
}
*/
