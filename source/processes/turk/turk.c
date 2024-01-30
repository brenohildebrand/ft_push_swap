/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 03:11:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/30 17:02:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk(t_pair stacks)
{
	if (stack_get_height(stacks->first) == 0)
	{
		return ;
	}
	else if (stack_get_height(stacks->first) == 1)
	{
		return ;
	}
	else if (stack_get_height(stacks->first) == 2)
	{
		solve_for_two(stacks);
		return ;
	}
	else if (stack_get_height(stacks->first) == 3)
	{
		solve_for_three(stacks);
		return ;
	}
	else
	{
		solve_for_more_than_three(stacks);
	}
}
