/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_build.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:20:37 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 06:21:25 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	stack_build(t_i32 max_height)
{
	t_stack	instance;

	instance = stack_create();
	stack_init(instance, max_height);
	return (instance);
}
