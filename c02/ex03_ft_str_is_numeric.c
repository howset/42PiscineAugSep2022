/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:26:33 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/25 15:26:36 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		res;
	char	c;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < '0' || c > '9')
		{
			res = 0;
		}
		i++;
	}
	return (res);
}

/*
int	main(void)
{
	char *test;
	int res;
	
	test = "!@#$";
	res = ft_str_is_numeric(test);
	ft_putchar(res+'0');
	ft_putchar('\n');
}
*/
