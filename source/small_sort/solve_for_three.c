/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_for_three.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:36:53 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/05 11:56:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "small_sort.h"

static void	compose(void (*foo)(void), void (*boo)(void))
{
	foo();
	boo();
}

void	solve_for_three(void)
{
	t_list	alpha;
	t_i32	a;
	t_i32	b;
	t_i32	c;

	alpha = any_as_instance(retrieve("alpha"));
	a =	any_as_i32(get(alpha, i32_to_any(2)));
	b = any_as_i32(get(alpha, i32_to_any(1)));
	c = any_as_i32(get(alpha, i32_to_any(0)));
	if (a < b && b < c && a < c)
		return ;
	else if (a < b && b > c && a < c)
		compose(rra, sa);
	else if (a > b && b < c && a < c)
		sa();
	else if (a < b && b > c && a > c)
		rra();
	else if (a > b && b < c && a > c)
		ra();
	else
		compose(sa, rra);
}
