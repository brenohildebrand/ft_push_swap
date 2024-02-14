/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:52:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 23:53:11 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "assert.h"

void	assert(int condition)
{
	if (!condition)
	{
		trillian_destroy();
		exit(1);
	}
}
