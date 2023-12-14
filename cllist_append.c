/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cllist_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:28:24 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/14 19:42:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cllist.h"

void	cllist_append(t_cllist cllist, void *value)
{
	t_cllist	next;

	next = cllist_create();
	next->value = value;
	while (cllist->next)
		cllist = cllist->next;
	cllist->next = next;
}
