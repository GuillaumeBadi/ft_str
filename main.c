/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <guillaume.badi@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 19:00:09 by gbadi             #+#    #+#             */
/*   Updated: 2014/09/03 15:33:27 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/str.h"

int			main(int argc, char *argv[])
{
	t_str		*str;
	t_str		*str2;

	str = ft_str("Hello");
	str2 = ft_str("Hello");
	printf("%d\n", ft_strcmp(str, str2));
	(void)argc;
	(void)argv;
	return (0);
}
