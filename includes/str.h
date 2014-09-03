/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <guillaume.badi@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 14:47:26 by gbadi             #+#    #+#             */
/*   Updated: 2014/09/03 17:52:20 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct		s_str
{
	char			c;
	struct s_str	*next;
}					t_str;

t_str			*ft_create_str(char c);
t_str			*ft_strgolast(t_str *str);
t_str			*ft_strpush(t_str *str, char c);
t_str			*ft_str(char *str);
void			ft_putstr(t_str *str);
t_str			*ft_strpop(t_str *str);
t_str			*ft_strshift(t_str *str);
t_str			*ft_strdud(t_str *str);
t_str			*ft_strcat(t_str *s1, t_str *s2);
t_str			*ft_strunshift(t_str *str, char c);
char			ft_strget(t_str *str, int index);
t_str			*ft_str_getnode(t_str *str, int index);
int				ft_strcmp(t_str *s1, t_str *s2);
int				ft_str_indexOf(t_str *source, t_str *pattern);
int				ft_str_startwith(t_str *src, t_str *pat);

#endif
