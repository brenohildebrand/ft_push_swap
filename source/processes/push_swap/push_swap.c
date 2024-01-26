/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:05:48 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/26 19:05:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_pair	stacks;

	validate_arguments(argc, argv);
	stacks = create_pair();
	initialize_first_stack(stacks->first, argv);
	turk(stacks);
	destroy_pair(stacks);
	return (0);
}
