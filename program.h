/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:22:28 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 14:11:10 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROGRAM_H
# define PROGRAM_H

# include "memory.h"
# include "cllist.h"
# include "ft_universe.h"
# include "integer.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_program	*t_program;

struct s_program {
	int			argc;
	char		**argv;
	t_cllist	stack_a;
	t_cllist	stack_b;
};

t_program	program_create(int argc, char *argv[]);
void		program_destroy(t_program program);
int			program_run(t_program program);
void		program_read_numbers(t_program program);
int			program_are_numbers_sorted(t_program program);
void		program_solve(t_program program);
void		program_push_from_a_to_b(t_program program);
void		program_solve_for_three_in_a(t_program program);
void		program_push_from_b_to_a(t_program program);

#endif