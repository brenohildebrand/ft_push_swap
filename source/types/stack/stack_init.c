/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:16:11 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 06:19:10 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_init(t_stack stack, t_i32 max_height)
{
	stack->max_height = max_height;
	stack->content = allocate(stack->max_height * sizeof(t_i32));
}
