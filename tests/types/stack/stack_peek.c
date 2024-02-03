/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_peek.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:17:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/03 16:27:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	main(void)
{
	t_stack	stack;

	stack = stack_build();
	stack_push(stack, 42);
	if (stack_peek(stack, 0) != 42)
	{
		stack_destroy(stack);
		return (1);
	}
	stack_push(stack, 79);
	if (stack_peek(stack, 1) != 79)
	{
		stack_destroy(stack);
		return (1);
	}
	stack_destroy(stack);
	return (0);
}
