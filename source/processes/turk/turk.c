/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 03:11:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 17:56:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk(t_stack a, t_stack b)
{
	if (stack_get_height(a) == 0 || stack_get_height == 1)
	{
		return ;
	}
	else if (stack_get_height(a) == 2)
	{
		sort_two_in_a();
		return ;
	}
	else if (stack_get_height(a) == 3)
	{
		sort_three_in_a();
		return ;
	}
	push_two_from_a_to_b(a, b);
	while (stack_get_height(a) > 2)
		push_cheaper_from_a_to_b(a, b);
	push_everything_from_b_to_a(a, b);
}