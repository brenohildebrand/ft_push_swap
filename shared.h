/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 09:58:22 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 10:32:40 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHARED_H
# define SHARED_H

# include "cllist.h"

typedef struct s_shared	*t_shared;

struct s_shared {
	t_cllist	stack_a;
	t_cllist	stack_b;
};

t_shared	shared_create(void);
void		shared_destroy(t_shared shared);
void		shared_set(t_shared shared);
t_shared	shared_get(void);
t_shared	*_shared_get_address(void);

#endif