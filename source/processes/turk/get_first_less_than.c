/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_first_less_than.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 22:23:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/25 22:51:25 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

/* This is optimized with binary search */

int	get_first_less_than(t_pair stacks, int i)
{
	int	j;
	int	low;
	int	high;
	int	mid;

	low = 0;
	high = stack_get_height(stacks->second) - 1;
	while (low <= high)
	{
		mid = (high + low) / 2;
		if (stack_peek(stacks->second, mid) <= stack_peek(stacks->first, i))
		{
			j = mid;
			low = mid + 1;
		}
		else if
		{
			low = mid - 1;
		}
	}
	return (j);
}
