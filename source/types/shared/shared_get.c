/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 04:54:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 04:56:24 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

t_shared	shared_get(void)
{
	static struct s_shared	shared = {
		.stacks = NULL,
		.c = 0,
	};

	return (&shared);
}
