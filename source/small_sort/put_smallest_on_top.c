/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_smallest_on_top.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:58:49 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/05 13:16:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "small_sort.h"

void	put_smallest_on_top(void)
{
	t_list	alpha;
	t_any	smallest;
	t_i32	smallest_index;
	t_any	current;
	t_i32	current_index;

	alpha = any_as_instance(retrieve("alpha"));	
	smallest = get(alpha, i32_to_any(0));
	smallest_index = 0;
	current_index = 1;
	while (current_index < get_length(alpha))
	{
		current = get(alpha, i32_to_any(current_index));
		if (compare(current, smallest) < 0)
		{
			smallest = current;
			smallest_index = current_index;
		}
		current_index++;
	}
	if (smallest_index <= 1)
		repeat(smallest_index + 1, rra);
	else
		repeat(get_length(alpha) - 1 - smallest_index, ra);
}
