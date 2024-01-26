/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_from_first_to_second.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:45:27 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/26 00:20:19 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

void	push_from_first_to_second(t_pair stacks, int i, int j)
{
	int	possibility;
	int	ri;
	int	rj;

	ri = stack_get_height(stacks->first) - i;
	rj = stack_get_height(stacks->second) - j;
	possibility = get_possibility(stacks, i, j);
	if (possibility == 0)
	{
		while (common--)
			pair_rotate(t_pair stacks);
		while (common - i > 0)
			stack_rotate(stacks->first);
		while (common - j > 0)
			stack_rotate(stacks->second);
		stack_push(stacks->second, stack_pop(stacks->first));
	}
	else if (possibility == 1)
	{
		
	}else if (possibility == 2)
	{
		
	}else if (possibility == 3)
	{
		
	}
}