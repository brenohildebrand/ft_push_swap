/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cllist_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:09:57 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/14 19:42:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cllist.h"

t_cllist	cllist_create(void)
{
	t_cllist	cllist;

	cllist = memory_create(sizeof(struct s_cllist));
	cllist->next = 0;
	cllist->value = 0;
	return (cllist);
}
