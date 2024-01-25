/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:05:48 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/25 00:55:09 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_pair	stacks;

	validate_arguments(argc, argv);
	stacks = create_both_stacks();
	initialize_first_stack(stacks->first, argv);
	turk(stacks);
	destroy_both_stacks(stacks);
	return (0);
}
