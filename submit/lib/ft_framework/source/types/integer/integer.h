/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:54:35 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/10 01:39:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_H
# define INTEGER_H

typedef struct s_integer	*t_integer;

struct s_integer {
	int	value;
};

t_integer	integer_create(int value);
void		integer_destroy(t_integer integer);

int			integer_get(t_integer integer);

#endif