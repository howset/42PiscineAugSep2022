/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:25:33 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/27 13:25:35 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

int	is_all_al(char c)
{
	int	res;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		res = 1;
	else
		res = 0;
	return (res);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (is_all_al(str[i - 1]) != 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char *res;
	char test[]= " salut, comment ? 42mots quarante-deux; cinquante+et+un";
	//char test[]= "  salut,  coMMent ?";
	int	i = 0;
	
	res = ft_strcapitalize(test);
	while (res[i])
	{
		ft_putchar(res[i]);
		i++;
	}
	ft_putchar('\n');
}
*/
