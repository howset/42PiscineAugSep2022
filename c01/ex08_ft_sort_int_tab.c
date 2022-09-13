/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:21:43 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/24 14:21:49 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	plchldr;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			if (tab[b] >= tab[a])
			{
				plchldr = tab[b];
				tab[b] = tab[a];
				tab[a] = plchldr;
			}
			b++;
		}
		a++;
	}
}
