/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:21:16 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 10:36:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

t_shared	shared_get(void)
{
	t_shared	*shared_address;

	shared_address = _shared_get_address();
	return (*shared_address);
}