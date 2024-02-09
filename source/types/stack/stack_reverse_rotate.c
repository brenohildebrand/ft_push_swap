/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:15:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/09 16:14:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

// -- Reverse rotate
// -- The bottom becomes the top.

void	stack_reverse_rotate(t_stack stack)
{
		vector_push(stack->content, vector_shift(stack->content));
}
