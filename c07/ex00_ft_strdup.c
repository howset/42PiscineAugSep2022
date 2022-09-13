/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:50:21 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/03 14:50:25 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*pcop;
	int		i;

	i = 0;
	while (src[i])
		i++;
	pcop = malloc(sizeof(char) * i);
	if (pcop == NULL)
		return ((void *)0);
	i = 0;
	while (src[i])
	{
		pcop[i] = src[i];
		i++;
	}
	pcop[i] = '\0';
	return (pcop);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *res;
	char *res2;
	
	res = ft_strdup("");
	res2 = strdup("");
	printf("Res ft:%s\n", res);
	printf("Res rf:%s\n", res2);
}
*/
