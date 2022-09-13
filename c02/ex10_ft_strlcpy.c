/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:34:27 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/29 12:34:29 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				li;

	i = 0;
	li = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0')
		{
			if (i == size)
			{
				i--;
				break ;
			}
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (li);
}

/*
#include <stdio.h>
#include <bsd/string.h>
//gcc -Wall -Werror -Wextra ft_strlcpy.c -lbsd
int main(void)
{
	int	l_src;
	char dest[] = "Other thing";
	char src[] = "Something else";
	char dest2[] = "Other things";
	char src2[] = "Something else";

	l_src = ft_strlcpy(dest, src, 10);
	printf("%s\n", dest);
	printf("Length of src by ft:%d\n", l_src);
	printf("Length of src by rf:%ld\n", strlcpy(dest2,src2,10));
	printf("%s\n", dest2);
	return (0);
}
*/
