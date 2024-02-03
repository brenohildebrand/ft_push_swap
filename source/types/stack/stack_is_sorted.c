/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:23:49 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/03 19:29:11 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_i32	stack_is_sorted(t_stack stack)
{
	t_stack_node	current;
	t_stack_node	previous;

	if (stack_get_height(stack) <= 1)
	{
		return (1);
	}
	else
	{
		previous = stack->head;
		current = stack->head->next;
		while (current)
		{
			if (previous->value > current->value)
				return (0);
			previous = current;
			current = current->next;
		}	
		return (1);
	}
}
