/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:37:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/09 16:10:30 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

// -- Rotate
// -- The top becomes the bottom.

void	stack_rotate(t_stack stack)
{
	vector_unshift(stack->content, vector_pop(stack->content));
}
