/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:11:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 11:54:16 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	t1(void);

t_i32	main(void)
{
	t1();
	// assert(forkrun(t1) == 0);
	return (0);
}

void	t1(void)
{
	t_i32	argc;
	t_i8	*argv[4];

	argc = 4;
	argv[0] = "./push_swap";
	argv[1] = "1";
	argv[2] = "2";
	argv[3] = "3";
	push_swap(argc, argv);
}