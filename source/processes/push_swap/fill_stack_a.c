/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:14:55 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/12 14:37:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_a(t_stack a, int argc, char *argv[])
{
	unsigned int	i;
	t_string		string;

	i = argc - 1;
	while (i >= 1)
	{
		string = string_create(argv[i]);
		stack_push(a, string_to_integer(string));
		string_destroy(string);
		i--;
	}
}
