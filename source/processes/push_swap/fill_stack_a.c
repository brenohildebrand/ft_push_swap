/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:14:55 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/03 18:44:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_a(t_stack a, char *argv[])
{
	t_u32		i;
	t_string	string;

	i = 1;
	while (argv[i])
	{
		string = string_build(argv[i]);
		stack_push(a, string_to_i32(string));
		string_destroy(string);
		i++;
	}
}
