/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_for_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:22:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/04 18:37:41 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

static void	part_1(t_stack a)
{
	t_i32	one;
	t_i32	two;
	t_i32	three;

	one = stack_peek(a, 0);
	two = stack_peek(a, 1);
	three = stack_peek(a, 2);
	if (one < two && one < three && two < three)
	{
		return ;
	}
	if (one < two && one < three && two > three)
	{
		stack_swap(a);
		print("sa");
		stack_rotate(a);
		print("ra");
		return ;
	}
	if (one > two && one < three && two < three)
	{
		stack_swap(a);
		print("sa");
		return ;
	}
}

static void	part_2(t_stack a)
{
	t_i32	one;
	t_i32	two;
	t_i32	three;

	one = stack_peek(a, 0);
	two = stack_peek(a, 1);
	three = stack_peek(a, 2);
	if (one < two && one > three && two > three)
	{
		stack_reverse_rotate(a);
		print("rra");
		return ;
	}
	if (one > two && one > three && two < three)
	{
		stack_rotate(a);
		print("ra");
		return ;
	}
}

static void	part_3(t_stack a)
{
	t_i32	one;
	t_i32	two;
	t_i32	three;

	one = stack_peek(a, 0);
	two = stack_peek(a, 1);
	three = stack_peek(a, 2);
	if (one > two && one > three && two > three)
	{
		stack_swap(a);
		print("sa");
		stack_reverse_rotate(a);
		print("rra");
		return ;
	}
}

void	julien_for_three(t_stack a, t_stack b)
{	
	(void)b;
	part_1(a);
	part_2(a);
	part_3(a);
}
