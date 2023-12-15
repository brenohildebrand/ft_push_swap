/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_run.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:06:14 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 13:55:57 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

int	program_run(t_program program)
{
	program_read_numbers(program);
	if (program_are_numbers_sorted(program))
		return (0);
	program_solve(program);
	return (0);
}
