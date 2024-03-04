/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_for_less_than_six.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:58:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 16:22:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	solve_for_less_than_six(void)
{
	t_list	alpha;
	t_i32	length;

	alpha = any_as_instance(retrieve("alpha"));
	length = get_length(alpha);
	call_if(length == 2, solve_for_two);
	call_if(length == 3, solve_for_three);
	call_if(length == 4, solve_for_four);
	call_if(length == 5, solve_for_five);
}
