/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:05:48 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/08 22:31:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	validate_arguments(argc, argv);
	a = stack_create();
	b = stack_create();
	fill_stack_a(a, argv);
	julien(a, b);
	stack_destroy(a);
	stack_destroy(b);
	return (0);
}
