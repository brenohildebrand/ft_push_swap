/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_it_is_already_sorted.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:38:50 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/05 11:06:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_if_it_is_already_sorted(void)
{
	t_list	alpha;
	t_i32	i;
	t_i32	is_sorted;
	t_any	current;
	t_any	previous;

	alpha = any_as_instance(retrieve("alpha"));
	is_sorted = 1;
	i = get_length(alpha) - 2;
	while (i >= 0)
	{
		current = get(alpha, i32_to_any(i));
		previous = get(alpha, i32_to_any(i + 1));
		if (compare(previous, current) > 0)
		{
			is_sorted = 0;
		}
		i--;
	}
	if (is_sorted)
		quit(0);
}
