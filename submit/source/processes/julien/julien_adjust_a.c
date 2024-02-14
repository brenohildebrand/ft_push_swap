/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_adjust_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:45:10 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/13 15:50:30 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

void	julien_adjust_a(t_stack a, t_stack b)
{
	int	minimum;
	int	counter;
	int	index;

	index = stack_get_height(a) - 1;
	minimum = index;
	while (index >= 0)
	{
		if (integer_get(stack_peek(a, index)) < \
			integer_get(stack_peek(a, minimum)))
			minimum = index;
		index--;
	}
	if (minimum < stack_get_height(a) - minimum)
	{
		counter = minimum;
		while (counter--)
			rra(a, b);
	}
	else
	{
		counter = stack_get_height(a) - (minimum + 1);
		while (counter--)
			ra(a, b);
	}
}
