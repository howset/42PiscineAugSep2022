/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:29:29 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/29 18:29:32 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				res;

	res = 0;
	i = 0;
	if (n <= 0)
		return (res);
	while (i < (n) && (s1[i] != '\0' || s2[i] != '\0'))
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
	//char *s1 = "TEST"; 
	//char *s2 = "test"; 
	char *s1 = "wHatnow"; 
	char *s2 = "whatnow";
	
	res = ft_strncmp(s1, s2, 4);
	printf("Res ft: %d\n", res);
	res = strncmp(s1, s2, 4);
	printf("Res rf: %d\n", res);
}
*/
