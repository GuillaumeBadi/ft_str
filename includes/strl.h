/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <guillaume.badi@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 14:47:26 by gbadi             #+#    #+#             */
/*   Updated: 2014/09/03 18:34:24 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct		s_strl
{
	char			c;
	struct s_strl	*next;
}					t_strl;

t_strl			*ft_create_strl(char c);
t_strl			*ft_strlgolast(t_strl *strl);
t_strl			*ft_strlpush(t_strl *strl, char c);
t_strl			*ft_strl(char *strl);
void			ft_putstrl(t_strl *strl);
t_strl			*ft_strlpop(t_strl *strl);
t_strl			*ft_strlshift(t_strl *strl);
t_strl			*ft_strldud(t_strl *strl);
t_strl			*ft_strlcat(t_strl *s1, t_strl *s2);
t_strl			*ft_strlunshift(t_strl *strl, char c);
char			ft_strlget(t_strl *strl, int index);
t_strl			*ft_strl_getnode(t_strl *strl, int index);
int				ft_strlcmp(t_strl *s1, t_strl *s2);
int				ft_strl_indexOf(t_strl *source, t_strl *pattern);
int				ft_strl_startwith(t_strl *src, t_strl *pat);
t_strl			*ft_strlset(t_strl *strl, int index, char c);

#endif
