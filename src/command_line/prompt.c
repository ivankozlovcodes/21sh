/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 20:35:12 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/08/31 06:57:07 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "colors.h"
#include "ftstring.h"
#include "ft_printf.h"

#include "command_line.h"

void	display_prompt(void)
{
	t_point		cursor;
	char		cwd[2048 + 1];

	getcwd(cwd, 2048);
	g_command_line.prompt_len = 0;
	// get_cursor_position(&cursor);
	// g_command_line.prompt_len =
		// ft_printf("%s%s%s %d %d > ", BLU, cwd, RESET, cursor.x, cursor.y) - 10;
		// ft_printf("%2d %2d > ", cursor.x, cursor.y);
		// ft_printf("", cursor.x, cursor.y);
}
