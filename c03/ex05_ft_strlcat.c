/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:07:25 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/30 12:07:29 by hsetyamu         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ldest;
	unsigned int	lsrc;

	lsrc = ft_strlen(src);
	ldest = ft_strlen(dest);
	i = 0;
	while (dest[i] != '\0')
		i++;
	if (size == 0)
		return (i - 2);
	else if (size <= ldest)
		return (ldest - 2 + size);
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ldest + lsrc);
}

/*
#include <stdio.h>
#include <bsd/string.h>
//gcc -Wall -Werror -Wextra ft_strlcat.c -lbsd
int main(void)
{
	char dest[30] = "His name is ";
	char src[30] = "Slim Shady";
	char dest2[30] = "Our name is ";
	char src2[30] = "Slim Shady";
	int r;
	int	size = 4;

	printf("Dest before: %s\n", dest);
	r = ft_strlcat(dest,src,size);
	printf("Value returned: %d\n",r);
	printf("Dest after: %s\n", dest);
	
	printf("Dest before rf: %s\n", dest2);
	r = strlcat(dest2,src2,size);
	printf("Value returned rf: %d\n",r);
	printf("Dest after rf: %s\n", dest2);
	
	return(0);
}
*/
