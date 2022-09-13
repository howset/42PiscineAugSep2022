/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:37:37 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/03 12:37:39 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*str;

	i = argc - 1;
	while (i >= 1)
	{
		str = argv[i];
		j = 0;
		while (str[j])
		{
			write(1, &str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
}
