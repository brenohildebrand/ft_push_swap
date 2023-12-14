/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cllist_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:11:34 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/14 19:42:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cllist.h"

void	cllist_destroy(t_cllist cllist)
{
	t_cllist	next;

	next = cllist->next;
	cllist->next = 0;
	if (cllist->value)
	{
		memory_destroy(cllist->value);
		cllist->value = 0;
	}
	memory_destroy(cllist);
	if (next)
		cllist_destroy(next);
}
