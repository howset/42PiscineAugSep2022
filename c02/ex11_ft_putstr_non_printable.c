/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:04:17 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/29 13:04:21 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex_lib(unsigned char nopr)
{
	char	chr[3];
	char	*hex;

	hex = "0123456789abcdef";
	chr[0] = '\\';
	chr[1] = hex[nopr / 16];
	chr[2] = hex[nopr % 16];
	write(1, chr, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
			write(1, &str[i], 1);
		else
			hex_lib((unsigned char)str[i]);
		i++;
	}
}

/*
int main(void)
{
	//char test[] = "Coucoutu vas bien ~ © µ?";
	//char test[] = {'C', '\n', 't', 'v', '.'};
	char test[9] = "printable";

	ft_putstr_non_printable(test);
	return (0);
}
*/
