/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:02:06 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 13:43:36 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

t_program	program_create(int argc, char *argv[])
{
	t_program	program;

	program = memory_create(sizeof(struct s_program));
	program->argc = argc;
	program->argv = argv;
	program->stack_a = cllist_create();
	program->stack_b = cllist_create();
	return (program);
}
