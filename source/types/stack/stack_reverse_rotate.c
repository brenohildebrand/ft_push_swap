/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:15:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/04 18:36:00 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

// -- Reverse rotate
// -- The bottom becomes the top.

void	stack_reverse_rotate(t_stack stack)
{
	if (stack->height == 1)
		return ;
	stack->tail->next = stack->head;
	stack->head->previous = stack->tail;
	stack->tail = stack->tail->previous;
	stack->head = stack->tail->next;
	stack->tail->next = NULL;
	stack->head->previous = NULL;
}
