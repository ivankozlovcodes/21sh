/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batman <ikozlov@student.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 07:22:22 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/08/23 15:47:05 by batman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

int		env(char *name, char **args)
{
	(void)name;
	(void)args;
	dict_print(g_env, "%s=%s\n");
	return (0);
}
