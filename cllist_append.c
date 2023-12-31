/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cllist_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:28:24 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 09:30:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cllist.h"

void	cllist_append(t_cllist cllist, void *value)
{
	t_cllist	next;

	if (cllist->value == 0)
	{
		cllist->value = value;
	}
	else
	{
		next = cllist_create();
		next->value = value;
		next->next = cllist;
		while (cllist->next != next->next)
			cllist = cllist->next;
		cllist->next = next;
	}
}
