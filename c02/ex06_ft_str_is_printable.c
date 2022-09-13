/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:40:18 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/25 15:40:21 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

int	ft_str_is_printable(char *str)
{
	int		i;
	int		res;
	char	c;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 32 && c < 127)
		{
			res = 1;
		}
		else
		{
			res = 0;
			break ;
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
	
	test = "12\n345 ";
	res = ft_str_is_printable(test);
	ft_putchar(res+'0');
	ft_putchar('\n');
}*/
