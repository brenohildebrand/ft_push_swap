/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:21:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 10:43:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_destroy(t_stack stack)
{
	t_stack_node	current;
	t_stack_node	next;

	current = stack->head;
	while (current)
	{
		next = current->next;
		stack_node_destroy(current);
		current = next;
	}
	delete(stack);
}
