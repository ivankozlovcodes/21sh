/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 18:52:52 by ikozlov           #+#    #+#             */
/*   Updated: 2019/09/02 23:29:27 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"

int		rule_4(t_lexer *l, t_atom_type cur_atom_type)
{
	if (cur_atom_type == quote || cur_atom_type == dquote)
	{
		if (l->current_state != state_quote)
			l->current_state = state_quote;
		else if (cur_atom_type == l->quote_type)
			l->current_state = state_start;
		return (RULE_ADD_ATOM | RULE_MOVE_ATOM);
	}
	return (RULE_NO_APPLY);
}
