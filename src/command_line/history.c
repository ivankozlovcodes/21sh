/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   history.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 07:18:27 by ikozlov           #+#    #+#             */
/*   Updated: 2019/08/31 11:32:54 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include "ftstring.h"

#include "command_line.h"

static void		command_line_history_display_active_item(void)
{
	char	*history_command;

	history_command = NULL;
	if (g_command_line.history.active_item)
	{
		history_command = ft_memalloc(
			g_command_line.history.active_item->content_size + 1);
		ft_memcpy(history_command, g_command_line.history.active_item->content,
			g_command_line.history.active_item->content_size);
	}
	string_clear_content(g_command_line.cmd);
	if (history_command)
		string_append(g_command_line.cmd, history_command);
	ft_free(1, history_command);
	display_current_command();
}

void			command_line_history_move_active(int direction)
{
	if (g_command_line.history.active_item == NULL)
		g_command_line.history.active_item = g_command_line.history.last_item;
	else
	{
		if (direction == 1 && g_command_line.history.active_item)
			g_command_line.history.active_item =
				g_command_line.history.active_item->next;
		else if (direction == -1 && g_command_line.history.active_item->prev)
			g_command_line.history.active_item =
				g_command_line.history.active_item->prev;
	}
	command_line_history_display_active_item();
}

void			command_line_history_add_command(char *command)
{
	size_t		command_len;
	t_dlist		*new_history_item;

	if (!command || (command_len = ft_strlen(command)) == 0)
		return ;
	new_history_item = dlstnew(command, command_len);
	if (g_command_line.history.list == NULL)
	{
		g_command_line.history.list = new_history_item;
		g_command_line.history.last_item = new_history_item;
	}
	else
	{
		dlstaddback(&g_command_line.history.list, new_history_item);
		g_command_line.history.last_item =
			g_command_line.history.last_item->next;
	}
}
