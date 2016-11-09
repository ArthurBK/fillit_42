/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:38:40 by abonneca          #+#    #+#             */
/*   Updated: 2016/11/09 13:26:14 by abonneca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define NUMBER_OF_PATTERNS 19

typedef struct	s_tetri
{
	char	*pattern;
	int		offset;
}				t_tetri;

int    ft_check_pattern(char *str);

#endif
