/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:04:31 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/25 12:04:36 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[40] = "Other things";
	char src[40] = "Something else";
	char dest2[40] = "Other things";
	char src2[40] = "Something else";

	printf("Dest before ft:%s\n", dest);
	printf("Dest after ft:%s\n", ft_strcpy(dest,src));
	printf("Dest2 before rf:%s\n", dest2);
	printf("Dest2 after rf:%s\n", strcpy(dest2,src2));
	return (0);
}
*/
