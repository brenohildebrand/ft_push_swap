/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:30:30 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 10:38:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

void	shared_set(t_shared shared)
{
	t_shared	*shared_address;

	shared_address = _shared_get_address();
	if (*shared_address == 0)
		*shared_address = shared;
}