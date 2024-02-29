/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:08:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 17:11:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// -- Let the first stack be Alpha and the second one be Beta. 

t_i32	push_swap(t_i32 argc, t_i8 *argv[])
{
	validate_arguments(argc, argv);
	fill_alpha_with_arguments(argc, argv);
	return (0);
}
