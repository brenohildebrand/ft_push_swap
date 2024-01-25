/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_first_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 03:13:51 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/25 01:46:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_first_stack(t_stack first, char *argv[])
{
	unsigned int	i;

	i = 1;
	while (argv[i])
		i++;
	while (i > 0)
	{
		stack_push(first, ft_atoi(argv[i]));
		i--;
	}
}