/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:51:54 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/26 20:12:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PAIR_H
# define PAIR_H

# include "framework.h"
# include "stack.h"

typedef struct s_pair	*t_pair;

struct s_pair {
	t_stack	first;
	t_stack	second;
};

t_typedata	pair(void);
t_pair		pair_create(void);
void		pair_init(t_pair pair);
t_pair		pair_build(void);
void		pair_destroy(t_pair pair);

void		pair_rotate(t_pair pair);
void		pair_reverse_rotate(t_pair pair);

void		pair_rotate_and_print(t_pair pair);
void		pair_reverse_rotate_and_print(t_pair pair);

#endif