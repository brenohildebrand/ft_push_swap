/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_read_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:35:10 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 13:47:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

void	program_read_numbers(t_program program)
{
	unsigned int	i;
	t_integer		integer;

	i = 1;
	while (i < (unsigned int)program->argc)
	{
		integer = integer_create();
		integer_set(integer, ft_atoi(program->argv[i]));
		cllist_append(program->stack_a, (void *)integer);
		i++;
	}
}
