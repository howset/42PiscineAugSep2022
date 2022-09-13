/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:50:15 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/08/30 11:50:19 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100] = "Any kind of characters in a sentence";
  //char to_find[20] = "Huahaha";
  char to_find[20] = "acter";
  char *loc;

  printf("\nstr: %s | to_find: %s\n", str, to_find);
  loc = ft_strstr(str, to_find);
  printf("\nloc ft: %s\n\n", loc);
  loc = strstr(str, to_find);
  printf("\nloc rf: %s\n\n", loc);
  //printf("\nstr: %s | to_find: %s\n", str, to_find2);
  //ptr = ft_strstr(str, to_find2);
  //printf("\nloc: %s\n", ptr);
  return (0);
}
*/
