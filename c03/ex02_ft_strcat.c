/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:58:51 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/29 18:58:53 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	ldest;
	int	lsrc;

	i = 0;
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	while (i <= lsrc)
	{
		dest[ldest + i] = src[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	*res; 
	char dest[] = "Kitkat"; 
	char src[] = "Digdug"; 
	char dest2[] = "Kitkat"; 
	char src2[] = "Digdug"; 
	
	res = ft_strcat(dest, src); 
	printf("Res ft: %s\n", res);
	res = strcat(dest2, src2); 
	printf("Res rf: %s\n", res);
}
*/
