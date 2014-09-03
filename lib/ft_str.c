/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <guillaume.badi@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 14:50:12 by gbadi             #+#    #+#             */
/*   Updated: 2014/09/03 15:31:52 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/str.h"

t_str			*ft_create_str(char c)
{
	t_str		*new;

	new = (t_str *)malloc(sizeof(t_str *));
	new->c = c;
	new->next = NULL;
	return (new);
}

t_str			*ft_strlast(t_str *str)
{
	t_str		*current;

	current = str;
	while (current->next != 0)
	{
		current = current->next;
	}
	return (current);
}

t_str			*ft_strpush(t_str *str, char c)
{
	t_str		*current;
	t_str		*new;

	new = ft_create_str(c);
	current = ft_strlast(str);
	current->next = new;
	return (str);
}

t_str			*ft_strpop(t_str *str)
{
	t_str			*current;

	current = str;
	while (current->next->next != NULL)
	{
		current = current->next;
	}
	free(current->next);
	current->next = NULL;
	return (str);
}

t_str			*ft_strshift(t_str *str)
{
	t_str		*current;
	t_str		*next;

	current = str;
	next = current->next;
	free(current);
	return (next);
	
}

t_str			*ft_strunshift(t_str *str, char c)
{
	t_str		*new;

	new = ft_create_str(c);
	new->next = str;
	return (new);
}

t_str			*ft_str(char *str)
{
	t_str		*current;
	int			i;

	i = 1;
	current = ft_create_str(str[0]);
	while (str[i])
	{
		current = ft_strpush(current, str[i]);
		i++;
	}
	return (current);
}

void			ft_putstr(t_str *str)
{
	t_str			*current;

	current = str;
	while (current != NULL)
	{
		write(1, &current->c, 1);
		current = current->next;
	}
}

int				ft_strlen(t_str *str)
{
	int			i;
	t_str		*current;

	i = 0;
	current = str;
	while (current->next != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}

t_str			*ft_str_getnode(t_str *str, int index)
{
	int			i;
	t_str		*current;

	i = 0;
	current = str;
	while (i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}

char			ft_strget(t_str *str, int index)
{
	int			i;
	t_str		*current;

	i = 0;
	current = str;
	while (i < index)
	{
		current = current->next;
		i++;
	}
	return (current->c);
}

int				ft_strcmp(t_str *s1, t_str *s2)
{
	t_str		*current1;
	t_str		*current2;

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
