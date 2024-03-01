/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:08:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 17:44:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// -- Let the first stack be Alpha and the second one be Beta. 

t_i32	push_swap(t_i32 argc, t_i8 *argv[])
{
	framework_setup();
	validate_arguments(argc, argv);
	create_and_share_stacks();
	fill_alpha_with_arguments(argc, argv);
	// runif(argc - 1 <= 5, solve_for_less_than_five());
	// runif(argc - 1 > 5, solve_for_more_than_five());
	framework_teardown();
	return (0);
}
