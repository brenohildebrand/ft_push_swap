/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:10:00 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/14 20:12:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_H
# define INTEGER_H

# include "memory.h"

typedef struct s_integer	*t_integer;

struct s_integer {
	int	value;	
};

t_integer	integer_create(void);
void		integer_destroy(t_integer integer);
void		integer_set(t_integer integer, int value);

#endif