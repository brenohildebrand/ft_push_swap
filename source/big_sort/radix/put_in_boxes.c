/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_in_boxes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:47:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/10 15:21:26 by bhildebr         ###   ########.fr       */
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
	t_i32	proxy;
	
	indexes = any_as_instance(retrieve("indexes"));
	index = any_as_i32(retrieve("index"));
	alpha = any_as_instance(retrieve("alpha"));
	current = get(alpha, i32_to_any(get_length(alpha) - 1));
	proxy = any_as_i32(get(indexes, i32_to_any(any_as_i32(current))));
	bit = (proxy & (1 << index)) != 0;
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

t_i32	leftmost_bit_index(t_i32 n) {
    t_i32	index;

	index = -1;
    while (n != 0) {
        n >>= 1;
        index++;
    }    
    return (index + 1);
}

static t_any	get_the_leftmost_bit(
	t_any accumulator,
	t_any instance,
	int index
){
	t_map	indexes;
	t_i32	best;
	t_i32	current;
	t_i32	number;

	(void)index;
	indexes = any_as_instance(retrieve("indexes"));
	best = any_to_i32(accumulator);
	number = any_as_i32(get(indexes, i32_to_any(any_as_i32(instance))));; // get number from table
	current = leftmost_bit_index(number);
	if (current > best)
	{
		best = current;
	}
	return (i32_to_any(best));	
}

void	put_in_boxes(void)
{
	t_list	alpha;
	t_i32	leftmost_bit;

	alpha = any_as_instance(retrieve("alpha"));
	leftmost_bit = any_to_i32(reduce(alpha, i32_to_any(-1), get_the_leftmost_bit));
	loop_in_range(0, leftmost_bit, foreachbit);
}
