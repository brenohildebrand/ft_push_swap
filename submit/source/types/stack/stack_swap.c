/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:39:15 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/11 00:48:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_swap(t_stack stack)
{
	t_any			last;
	t_any			next_to_last;
	unsigned int	last_index;
	unsigned int	next_to_last_index;

	last_index = vector_get_length(stack->content) - 1;
	next_to_last_index = last_index - 1;
	last = vector_get(stack->content, last_index);
	next_to_last = vector_get(stack->content, next_to_last_index);
	vector_set(stack->content, last_index, next_to_last);
	vector_set(stack->content, next_to_last_index, last);
}
