/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:48:27 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/30 11:48:30 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
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
	
	res = ft_strncat(dest, src,3); 
	printf("Res ft: %s\n", res);
	res = strncat(dest2, src2,3); 
	printf("Res rf: %s\n", res);
}
*/
