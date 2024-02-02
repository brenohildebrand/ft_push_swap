/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:51:54 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 04:56:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H

# include "framework.h"
# include "stack.h"

typedef struct s_stacks	*t_stacks;

struct s_stacks {
	t_stack	a;
	t_stack	b;
};

// t_typedata	stacks(void);
// t_stacks	stacks_create(void);
// void		stacks_init(t_stacks stacks);
// t_stacks	stacks_build(void);
// void		stacks_destroy(t_stacks stacks);

// void		stacks_rotate(t_stacks stacks);
// void		stacks_reverse_rotate(t_stacks stacks);

// void		stacks_rotate_and_print(t_stacks stacks);
// void		stacks_reverse_rotate_and_print(t_stacks stacks);

#endif