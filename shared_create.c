/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:22:34 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 10:24:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

t_shared	shared_create(void)
{
	t_shared	shared;

	shared = memory_create(sizeof(struct s_shared));
	shared->stack_a = cllist_create();
	shared->stack_b = cllist_create();
	return (shared);
}