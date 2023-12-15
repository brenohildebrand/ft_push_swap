/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _shared_get_address.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:28:35 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 10:36:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

t_shared	*_shared_get_address(void)
{
	static t_shared	shared = 0;

	return (&shared);
}
