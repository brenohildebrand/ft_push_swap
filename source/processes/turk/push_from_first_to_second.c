/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_from_first_to_second.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:45:27 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/26 18:37:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

static void	zero(t_pair stacks, int i, int j)
{
	if (i > j)
	{
		while (j--)
		{
			pair_rotate(stacks);
			i--;
		}
		while (i--)
			stack_rotate(stacks->first);
	}
	else
	{
		while (i--)
		{
			pair_rotate(stacks)
			j--;
		}
		while (j--)
			stack_rotate(stacks->second);
	}
}

void	one(t_pair stacks, int i, int j)
{
	while (i--)
		stack_rotate(stacks->first);
	while (j < stack_get_height(stacks->second))
	{
		stack_reverse_rotate(stacks->second);
		j++;
	}
}

void	two(t_pair stacks, int i, int j)
{
	while (i < stack_get_height(stacks->first))
	{
		stack_reverse_rotate(stacks->first);
		i++;
	}
	while (j--)
		stack_rotate(stacks->second);
}

void	three(t_pair stacks, int i, int j)
{
	int	ri;
	int	rj;

	ri = stack_get_height(stacks->first) - i;
	rj = stack_get_height(stacks->second) - j;
	if (ri > rj)
	{
		while (rj--)
		{
			pair_reverse_rotate(stacks);
			ri--;
		}
		while (ri--)
			stack_reverse_rotate(stacks->first);
	}
	else
	{
		while (ri--)
		{
			pair_reverse_rotate(stacks);
			rj--;
		}
		while (rj--)
			stack_reverse_rotate(stacks->second);
	}
}

void	push_from_first_to_second(t_pair stacks, int i, int j)
{
	int	possibility;

	possibility = get_possibility(stacks, i, j);
	if (possibility == 0)
		zero(stacks, i, j );
	else if (possibility == 1)
		one(stacks, i, j);
	else if (possibility == 2)
		two(stacks, i, j);
	else if (possibility == 3)
		three(stacks, i, j);
	stack_push(stacks->second, stack_pop(stacks->first));
}