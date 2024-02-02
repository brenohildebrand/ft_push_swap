/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 04:52:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 04:54:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHARED_H
# define SHARED_H

# include "stacks.h"

typedef struct s_shared	*t_shared;

struct s_shared {
	t_stacks	stacks;
	t_stack		c;
};

t_shared	shared_get(void);

#endif