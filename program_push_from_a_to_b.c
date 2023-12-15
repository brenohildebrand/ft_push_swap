/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_push_from_a_to_b.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:11:23 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 14:27:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

//  * for four or + just do the following
//  * push the first two to B
//  * calculate the price of pushing each number of A to B so that B keeps ordered
//  * do the cheapest action 
//  * recalculate till A is left 3

// push the first two to B
// calculate the price of pushing each number of A to B so that B keeps ordered
// push on top of the maximum number below the number you're analyzing
// so do a loop in stack A
// your counter will be how many times you need to rotate A and you can reverse rotate A by the opposite number
// find the number that should be on top of B and see how many times you would need to rotate B
// and optimize your options based on how many times you need to rotate stack A and stack B and
// make a decision
// and apply the rotation
// do the cheapest action 
// recalculate till A is left with 3 numbers
// order A using the 6 possibilities
// put everything from B to A again so that A keeps ordered
// exit

void	program_push_from_a_to_b(t_program program)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ra;
	unsigned int	rb;
	unsigned int	current_length_a;

	i = 0;
	while (program->argc - 1 - i > 3)
	{
		j = 0;
		while (j < program->argc - 1 - i)
		{
			// calculate cheapest
			j++;
		}
		// do the cheapest
		i++;
	}
}