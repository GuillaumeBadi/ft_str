/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <guillaume.badi@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 19:00:09 by gbadi             #+#    #+#             */
/*   Updated: 2014/09/03 18:19:31 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/str.h"

int			main(int argc, char *argv[])
{
	t_str		*str;

	str = ft_str("GUillaume");
	ft_strset(str, 1, 'u');
	ft_strpush(str, 'u');
	ft_putstr(str);
	(void)argc;
	(void)argv;
	return (0);
}
