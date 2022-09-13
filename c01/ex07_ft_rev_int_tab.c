/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:05:50 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/24 12:05:52 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	plchldr;

	plchldr = *a;
	*a = *b;
	*b = plchldr;
}

void	loop_tab(int a, int b, int plchldr, int *tab)
{
	int	*pta;
	int	*ptb;

	while (a < plchldr)
	{
		pta = &tab[a];
		ptb = &tab[b];
		ft_swap(pta, ptb);
		a++;
		b--;
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	plchldr;
	int	*pta;
	int	*ptb;

	a = 0;
	b = size -1;
	if (size % 2 == 0)
	{
		plchldr = size / 2;
		loop_tab(a, b, plchldr, tab);
	}
	else
	{
		plchldr = (size - 1) / 2;
		loop_tab(a, b, plchldr, tab);
	}
}
