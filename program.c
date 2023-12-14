/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:12:42 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/14 20:14:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The idea for push_swap is to push the first two elements from stack A to
 * stack B and then to calculate what is the cheapest operation. The operation
 * refers to putting a number from stack A to stack B so that stack B keeps
 * sorted. That's it!
*/

/**
 * Data:
 * - we'll print the operations as soon as we calculate them
 * - what do we need to calculate them
 * - go develop
*/

/**
 * check if input has 0 or 1 parameters. If so just return cause it's sorted
 * read input and store it in a circular linked list
 * if there is only one it's already solved.
 * if there are two check if they are ordered
 * if they are exit
 * if they are not print swap a and exit
 * if there are three do the possibilities
 * for four or + just do the following
 * push the first two to B
 * calculate the price of pushing each number of A to B so that B keeps ordered
 * do the cheapest action 
 * recalculate till A is empty
 * put everything from B to A again
 * exit
 * that's the program
 * create a free all function to not have headaches with boring evaluators
*/

#include "program.h"

int	main(int argc, char *argv[])
{
	unsigned int	i;
	t_cllist		cllist;
	t_integer		integer;

	if (argc == 1 || argc == 2)
	{
		return (0);
	}
	cllist = cllist_create();
	i = 1;
	while (i < (unsigned int)argc)
	{
		integer = integer_create();
		integer_set(integer, ft_atoi(argv[i]));
		cllist_append(cllist, (void *)integer);
		i++;
	}
	return (0);
}
