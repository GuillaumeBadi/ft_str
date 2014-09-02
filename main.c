/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <guillaume.badi@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 19:00:09 by gbadi             #+#    #+#             */
/*   Updated: 2014/09/02 19:56:12 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/str.h"

int			main(int argc, char *argv[])
{
	t_str		*str;
	t_str		*str2;

	str = ft_str("Hello ");
	str2 = ft_str("World!");
	str = ft_strcat(str, str2);
	str = ft_strunshift(str, 'P');
	ft_putstr(str);
	return (0);
}
