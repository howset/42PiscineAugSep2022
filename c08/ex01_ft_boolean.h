/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:58:49 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/05 11:58:50 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
norminette -R CheckDefine otherwise errors
*/
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef int	t_bool;
# define EVEN(x)	(x % 2 == 0)
# define TRUE	1
# define FALSE	0
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define SUCCESS	0
#endif
