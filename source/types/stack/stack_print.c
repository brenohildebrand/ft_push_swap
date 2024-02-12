/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:35:55 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/11 01:01:15 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "integer.h"
#include <stdio.h>

void	stack_print(t_stack stack)
{
	int	i;

	debug("You should remove stack_print before submitting.");
	i = 0;
	while (i < stack_get_height(stack))
	{
		printf("%d ", integer_get(stack_peek(stack, i)));
		i++;
	}
	printf("\n");
}
