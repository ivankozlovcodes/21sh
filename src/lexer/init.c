/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 08:42:13 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/09/02 23:48:07 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"

void			lexer_default_state(t_lexer *lexer)
{
	lexer->current_state = state_start;
	lexer->op_type = unkn;
	lexer->quote_type = unkn;
}

t_lexer			*init_lexer(char *input)
{
	static t_lexer		lexer;

	lexer_default_state(&lexer);
	lexer.input = input;
	return (&lexer);
}
