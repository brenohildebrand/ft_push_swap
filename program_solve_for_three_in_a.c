/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_solve_for_three_in_a.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:11:57 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 14:21:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

// sort three left in A
// do the 6 possibilities
// 1 2 3 -> return	-> (f_value < s_value && f_value < t_value) && (s_value < t_value)
// 1 3 2 -> sa ra	-> (f_value < s_value && f_value < t_value) && (s_value > t_value)
// 2 1 3 -> sa		-> (f_value > s_value && f_value < t_value) && (s_value < t_value)
// 2 3 1 -> rra		-> (f_value < s_value && f_value > t_value) && (s_value > t_value)
// 3 1 2 -> ra		-> (f_value > s_value && f_value > t_value) && (s_value < t_value)
// 3 2 1 -> sa rra	-> (f_value > s_value && f_value > t_value) && (s_value > t_value)

void	program_solve_for_three_in_a(t_program program)
{
	return ;
}