/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_for_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:21:34 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/12 15:11:11 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

void	julien_for_two(t_stack a, t_stack b)
{
	(void)b;

	if (integer_get(stack_peek(a, 1)) < integer_get(stack_peek(a, 0)))
	{
		return ;
	}
	else
	{
		stack_swap(a);
		print("sa");
	}
}
