/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <guillaume.badi@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 14:50:12 by gbadi             #+#    #+#             */
/*   Updated: 2014/09/03 18:32:46 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/strl.h"

t_strl			*ft_create_strl(char c)
{
	t_strl		*new;

	new = (t_strl *)malloc(sizeof(t_strl *));
	new->c = c;
	new->next = NULL;
	return (new);
}

t_strl			*ft_strllast(t_strl *strl)
{
	t_strl		*current;

	current = strl;
	while (current->next != 0)
	{
		current = current->next;
	}
	return (current);
}

t_strl			*ft_strlpush(t_strl *strl, char c)
{
	t_strl		*current;
	t_strl		*new;

	new = ft_create_strl(c);
	current = ft_strllast(strl);
	current->next = new;
	return (strl);
}

t_strl			*ft_strlpop(t_strl *strl)
{
	t_strl			*current;

	current = strl;
	while (current->next->next != NULL)
	{
		current = current->next;
	}
	free(current->next);
	current->next = NULL;
	return (strl);
}

t_strl			*ft_strlshift(t_strl *strl)
{
	t_strl		*current;
	t_strl		*next;

	current = strl;
	next = current->next;
	free(current);
	strl = next;
	return (next);
	
}

t_strl			*ft_strlunshift(t_strl *strl, char c)
{
	t_strl		*new;

	new = ft_create_strl(c);
	new->next = strl;
	return (new);
}

t_strl			*ft_strl(char *strl)
{
	t_strl		*current;
	int			i;

	i = 1;
	current = ft_create_strl(strl[0]);
	while (strl[i])
	{
		current = ft_strlpush(current, strl[i]);
		i++;
	}
	return (current);
}

void			ft_putstrl(t_strl *strl)
{
	t_strl			*current;

	current = strl;
	while (current != NULL)
	{
		write(1, &current->c, 1);
		current = current->next;
	}
}

int				ft_strllen(t_strl *strl)
{
	int			i;
	t_strl		*current;

	i = 0;
	current = strl;
	while (current->next != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}

t_strl			*ft_strl_getnode(t_strl *strl, int index)
{
	int			i;
	t_strl		*current;

	i = 0;
	current = strl;
	while (i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}

char			ft_strlget(t_strl *strl, int index)
{
	int			i;
	t_strl		*current;

	i = 0;
	current = strl;
	while (i < index)
	{
		current = current->next;
		i++;
	}
	return (current->c);
}

t_strl			*ft_strlset(t_strl *strl, int index, char c)
{
	t_strl		*current;
	int			i;

	i = 0;
	current = strl;
	while (i < index)
	{
		current = current->next;
		i++;
	}
	current->c = c;
	return (strl);
}

int				ft_strlcmp(t_strl *s1, t_strl *s2)
{
	t_strl		*current1;
	t_strl		*current2;

	current1 = s1;
	current2 = s2;
	while (current1->next != NULL && current2->next != NULL)
	{
		if (current1->c != current2->c)
		{
			return (current2->c - current1->c);
		}
		current1 = current1->next;
		current2 = current2->next;
	}
	return (0);
}

int				ft_strl_startwith(t_strl *src, t_strl *pat)
{
	t_strl		*current_src;
	t_strl		*current_pat;

	current_src = src;
	current_pat = pat;
	if (ft_strllen(pat) > ft_strllen(src))
	{
		return (0);
	}
	while (current_src->c == current_pat->c)
	{
		if (current_pat->next == NULL)
		{
			return (1);
		}
		current_src = current_src->next;
		current_pat = current_pat->next;
	}
	return (0);
}

int				ft_strl_indexOf(t_strl *source, t_strl *pattern)
{
	t_strl		*src;
	int			i;

	src = source;
	i = 0;
	while (src->next != NULL)
	{
		if (ft_strl_startwith(src, pattern))
			return (i);
		else
		{
			src = src->next;
			i++;
		}
	}
	return (-1);
}
