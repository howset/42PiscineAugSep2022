/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:43:43 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/29 17:43:49 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (res);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	int	res;
	char *s1 = "tesT";
	char *s2 = "test";
	
	res = ft_strcmp(s1, s2);
	printf("Res ft: %d\n", res);
	res = strcmp(s1, s2);
	printf("Res rf: %d\n", res);
}
*/
