/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:43:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/03 17:00:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	main(void)
{
	t_stack	stack;

	stack = stack_build();
	stack_push(stack, 42);
	stack_rotate(stack);
	stack_push(stack, 60);
	if (stack_peek(stack, 0) != 42)
	{
		stack_destroy(stack);
		return (1);
	}
	stack_rotate(stack);
	if (stack_peek(stack, 0) != 60)
	{
		stack_destroy(stack);
		return (1);
	}
	stack_rotate(stack);
	stack_destroy(stack);
	return (0);
}
