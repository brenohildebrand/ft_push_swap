/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_destroy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:03:35 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 13:43:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

void	program_destroy(t_program program)
{
	cllist_destroy(program->stack_a);
	cllist_destroy(program->stack_b);
	memory_destroy(program);
}
