/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batman <ikozlov@student.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 23:41:01 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/08/22 21:07:40 by batman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

int		main(void)
{
	// init_termconfig();
	init_env();
	init_signal_handlers();
	while (1)
	{
		display_prompt();
		handle_input();
	}
}
