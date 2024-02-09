/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:14:55 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/08 22:26:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_a(t_stack a, char *argv[])
{
	unsigned int	i;
	t_string		string;

	i = 1;
	while (argv[i])
	{
		string = string_create(argv[i]);
		stack_push(a, string_to_int(string));
		string_destroy(string);
		i++;
	}
}
