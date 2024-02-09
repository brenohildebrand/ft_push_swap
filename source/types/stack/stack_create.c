/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:12:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/09 15:01:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	stack_create(void)
{
	static struct s_type	type = {
		.destroy = (void (*)(t_any))stack_destroy,
		.size = sizeof(struct s_stack)
	};
	t_stack					stack;
	
	stack = (t_stack)new(&type);
	stack->content = vector_create();
	return (stack);
}
