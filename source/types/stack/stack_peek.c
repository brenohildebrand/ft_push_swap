/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_peek.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:13:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/03 16:17:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_i32	stack_peek(t_stack stack, t_u32 index)
{
	t_stack_node	current;

	if (index >= stack->height)
	{
		debug("You tried to peek at an invalid index in a stack.");
		return (0);	
	}
	current = stack->head;
	while (index)
	{
		current = current->next;
		index--;
	}
	return (current->value);
}
