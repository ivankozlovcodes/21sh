/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_line.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 20:46:36 by batman            #+#    #+#             */
/*   Updated: 2019/08/31 12:07:10 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMAND_LINE_H
# define COMMAND_LINE_H

# include "dlist.h"
# include "ft_math.h"
# include "dstring.h"

struct									s_history
{
	t_dlist		*list;
	t_dlist		*last_item;
	t_dlist		*active_item;
};

struct									s_command_line
{
	t_string			*cmd;
	struct s_history	history;
	t_point				cursor_pos;
	size_t				prompt_len;
};

typedef struct s_command_line			t_command_line;

extern t_command_line					g_command_line;

/*
**	src/command_line
*/
void									handle_input(void);
void									display_prompt(void);
void									display_cursor(int c);
void									display_current_command(void);
void									init_command_line(void);
void									clear_current_command(void);
void									destroy_command_line(void);

/*
**	cursor
*/
void									move_cursor(int horizontal_delta,
	int vertical_delta);
void									move_cursor_home(void);
void									move_cursor_end(void);
int										get_cursor_position(t_point *cur_pos);

/*
**	history
*/
void									command_line_history_move_active(
	int direction);
void									command_line_history_add_command(
	char *command);

#endif
