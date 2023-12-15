/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_solve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:49:37 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 14:15:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

void	program_solve(t_program program)
{
	if (program->argc == 3)
	{
		ft_print("sa\n");
		return ;
	}
	else
	{
		program_push_from_a_to_b(program);
		program_solve_for_three_in_a(program);
		program_push_from_b_to_a(program);
	}
}
