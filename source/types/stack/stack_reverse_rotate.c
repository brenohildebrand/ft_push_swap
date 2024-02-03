/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:15:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/03 17:30:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

// -- Reverse rotate
// -- The bottom becomes the top.

void	stack_reverse_rotate(t_stack stack)
{
	t_stack_node	aux;

	if (stack->height == 1)
	{
		return ;
	}
	else if (stack->height == 2)
	{
		aux = stack->head;
		stack->head = stack->tail;
		stack->head->next = aux;
		stack->head->previous = NULL;
		stack->tail = aux;
		stack->tail->next = NULL;
		stack->tail->previous = stack->head;		
	}
	else
	{
		aux = stack->head;
		stack->head = stack->tail;
		stack->head->next = aux;
		stack->head->previous = NULL;
		stack->tail = stack->tail->previous;
		stack->tail->next = NULL;
	}
}
