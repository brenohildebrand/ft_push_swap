/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_for_more_than_three.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 03:29:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/25 03:56:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turh.h"

void	solve_for_more_than_three(t_pair stacks)
{
	push_two_from_first_to_second(stacks);
	while (stack_get_height(stacks->first) > 2)
		push_cheaper_from_first_to_second(stacks);
	push_everything_from_second_to_first(stacks);
}