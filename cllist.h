/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cllist.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:06:14 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/14 19:44:16 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLLIST_H
# define CLLIST_H

# include "memory.h"

typedef struct s_cllist	*t_cllist;

struct s_cllist {
	void		*value;
	t_cllist	next;
};

t_cllist	cllist_create(void);
void		cllist_destroy(t_cllist cllist);
void		cllist_append(t_cllist cllist, void *value);

#endif