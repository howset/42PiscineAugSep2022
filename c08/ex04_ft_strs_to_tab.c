/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:32:12 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/07 11:32:15 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

/* C04 ex00 */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* C07 ex00 */
char	*ft_strdup(char *src)
{
	char	*pcop;
	int		i;

	i = 0;
	while (src[i])
		i++;
	pcop = malloc(sizeof(char) * i);
	if (pcop == NULL)
		return ((void *)0);
	i = 0;
	while (src[i])
	{
		pcop[i] = src[i];
		i++;
	}
	pcop[i] = '\0';
	return (pcop);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			i;

	res = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		i++;
	}
	res[i].size = 0;
	res[i].str = (void *) 0;
	res[i].copy = (void *) 0;
	return (res);
}

