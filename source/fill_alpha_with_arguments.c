/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_alpha_with_arguments.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:12:27 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 10:59:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_argument_to_alpha(t_i32 i, t_list alpha, t_i8 *argv[]);

void	fill_alpha_with_arguments(t_i32 argc, t_i8 *argv[])
{
	t_i32	i;
	t_list	alpha;

	alpha = any_as_instance(retrieve("alpha"));
	i = argc - 1;
	while (i >= 1)
	{
		push_argument_to_alpha(i, alpha, argv);	
		i--;
	}
}

static void	push_argument_to_alpha(t_i32 i, t_list alpha, t_i8 *argv[])
{
	push(alpha, i32_to_any(i8_sequence_to_i32(argv[i])));
}
