/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <guillaume.badi@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 19:00:09 by gbadi             #+#    #+#             */
/*   Updated: 2014/09/03 18:33:02 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/strl.h"

int			main(int argc, char *argv[])
{
	t_strl		*strl;

	strl = ft_strl("GUillaume");
	ft_strlset(strl, 1, 'u');
	ft_strlpush(strl, 'u');
	ft_putstrl(strl);
	(void)argc;
	(void)argv;
	return (0);
}
