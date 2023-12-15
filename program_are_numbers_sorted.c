/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_are_numbers_sorted.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:48:21 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 13:54:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

int	program_are_numbers_sorted(t_program program)
{
	t_cllist	current;
	t_cllist	top;

	top = program->stack_a;
	current = top;
	while (current->next != top)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}
