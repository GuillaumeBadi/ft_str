/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <guillaume.badi@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 14:50:12 by gbadi             #+#    #+#             */
/*   Updated: 2014/09/02 21:02:06 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_str			*ft_create_str(char c)
{
	t_str		*new;

	new = (t_str *)malloc(sizeof(t_str *));
	new->c = c;
	new->next = NULL;
	return (new);
}

t_str			*ft_strpush(t_str *str, char c)
{
	t_str		*current;
	t_str		*new_char;

	current = str;
	new_char = (t_str *)malloc(sizeof(t_str *));
	new_char->c = c;
	new_char->next = NULL;
	while (current != NULL)
	{
		current = current->next;
	}
	current->next = new_char;
	return (str);

t_str			*ft_str(char *str)
{
	t_str		*finale;
	int			i;

	finale = ft_create_str(str[0]);
	i = 1;
	while (str[i])
	{
		finale = ft_strpush(finale, str[i]);
		i++;
	}
	return (finale);
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

t_str			*ft_is_word(t_str *str, t_str *str)
{
	t_str		*current;

	current = str;

}

t_str			*ft_indexOf(t_str *str, char *str)
{
	
}
