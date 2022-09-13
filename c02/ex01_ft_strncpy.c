/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:16:32 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/25 12:17:04 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
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
	printf("Dest after ft:%s\n", ft_strncpy(dest,src,4));
	printf("Dest2 before rf:%s\n", dest2);
	printf("Dest2 after rf:%s\n", strncpy(dest2,src2,4));
	return (0);
}
*/
