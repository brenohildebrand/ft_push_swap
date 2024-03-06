/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_in_boxes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:47:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/06 11:22:57 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "radix.h"

static void	distribute_in_boxes(void)
{
	t_list	alpha;
	t_map	indexes;
	t_i32	index;
	t_any	current;
	t_i32	bit;
	
	indexes = any_as_instance(retrieve("indexes"));
	index = any_as_i32(retrieve("index"));
	alpha = any_as_instance(retrieve("alpha"));
	current = get(alpha, get_length(alpha) - 1);
	bit = (any_as_i32(get(indexes, current)) & (1 << index)) != 0;
	if (bit == 0)
	{
		pb();
	}
	else
	{
		ra();
	}
}

static void foreachbit(t_i32 index)
{
	t_list	alpha;
	t_list	beta;

	alpha = any_as_instance(retrieve("alpha"));
	beta = any_as_instance(retrieve("beta"));
	share("index", i32_to_any(index));
	repeat(get_length(alpha), distribute_in_boxes);
	conceal("index");
	while (get_length(beta))
	{
		pa();
	}
}

void	put_in_boxes(void)
{
	loop_in_range(0, 31, foreachbit);
}
