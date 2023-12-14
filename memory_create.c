/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:17:01 by marvin            #+#    #+#             */
/*   Updated: 2023/12/14 19:42:30 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

t_memory	memory_create(unsigned int size)
{
	t_memory	memory;

	memory = malloc(size);
	if (memory == (void *)0)
	{
		write(1, "Error\n", 7);
		exit(255);
	}
	return (memory);
}
