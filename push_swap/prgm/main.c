/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:46:41 by grinella          #+#    #+#             */
/*   Updated: 2023/05/22 15:10:24 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	printf ("A\n");
	new_element(&stack_a, 3);
	printf ("B\n");
	new_element(&stack_a, 2);
	printf ("B1\n");
	new_element(&stack_a, 1);
	printf ("C\n");
	three_nmbrs(stack_a);
	printf ("C1\n");
	print_number(stack_a);
	(void) ac;
	(void) av;
	return (0);
}

/*
** fai una funzione che printa il numero di mosse fatte dal main
*/

void	print_number(t_stack *stack)
{
	t_stack	*first_node;

	first_node = stack;
	while (stack->next != first_node)
	{
		stack = stack->next;
	}
	printf("%d\n", stack->value);
}
