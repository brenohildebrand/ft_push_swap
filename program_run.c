/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_run.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:06:14 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 11:13:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

int	program_run(t_program program)
{
	program_read_numbers();
	if (program_are_numbers_sorted())
		return (0);
	program_solve(); // push from A to B till A has only 3 left ... sort them ... from B to A ... done
}

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

// static void	read_input(void)
// {
// 	unsigned int	i;

// 	i = 1;
// 	while (i < (unsigned int)argc)
// 	{
// 		integer = integer_create();
// 		integer_set(integer, ft_atoi(argv[i]));
// 		cllist_append(shared->stack_a, (void *)integer);
// 		i++;
// 	}
// }

// int	main(int argc, char *argv[])
// {
// 	t_shared		shared;
// 	unsigned int	i;
// 	t_cllist		cllist;
// 	t_integer		integer;

// 	if (argc == 1 || argc == 2)
// 	{
// 		return (0);
// 	}
// 	else
// 	{
// 		shared = shared_create();
// 		shared_set(shared);
// 		read_input();
// 		if (argc == 3)
// 		{
// 			if (cllist->value > cllist->next->value)
// 			{
// 				ft_print("sa\n");
// 				exit(0);
// 			}
// 			else
// 			{
// 				exit(0);
// 			}
// 		}
// 		else if (argc == 4)
// 		{
// 			// do the 6 possibilities
// 			// 1 2 3 -> return	-> (f_value < s_value && f_value < t_value) && (s_value < t_value)
// 			// 1 3 2 -> sa ra	-> (f_value < s_value && f_value < t_value) && (s_value > t_value)
// 			// 2 1 3 -> sa		-> (f_value > s_value && f_value < t_value) && (s_value < t_value)
// 			// 2 3 1 -> rra		-> (f_value < s_value && f_value > t_value) && (s_value > t_value)
// 			// 3 1 2 -> ra		-> (f_value > s_value && f_value > t_value) && (s_value < t_value)
// 			// 3 2 1 -> sa rra	-> (f_value > s_value && f_value > t_value) && (s_value > t_value)
// 			if (cllist->value < cllist->next->value < cllist->next->next->value)
// 			{
// 				exit(0);
// 			}
// 			else if (cllist)
// 		}
// 		else
// 		{
// 			// push the first two to B
//  			// calculate the price of pushing each number of A to B so that B keeps ordered
// 			// push on top of the maximum number below the number you're analyzing
// 			// so do a loop in stack A
// 			// your counter will be how many times you need to rotate A and you can reverse rotate A by the opposite number
// 			// find the number that should be on top of B and see how many times you would need to rotate B
// 			// and optimize your options based on how many times you need to rotate stack A and stack B and
// 			// make a decision
// 			// and apply the rotation
//  			// do the cheapest action 
//  			// recalculate till A is left with 3 numbers
// 			// order A using the 6 possibilities
//  			// put everything from B to A again so that A keeps ordered
//  			// exit
// 		}
// 		return (0);
// 	}
// }
