/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:02:59 by grinella          #+#    #+#             */
/*   Updated: 2023/05/22 14:36:34 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	p_(t_stack *stack_from, t_stack *stack_to, char c)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (stack_from == NULL)
		return ;
	tmp = stack_from;
	tmp2 = tmp->next;
	tmp->next = stack_to;
	stack_to = tmp;
	stack_from = tmp2;
	if (c == 'a')
		write (1, "pa\n", 3);
	else if (c == 'b')
		write (1, "pb\n", 3);
}

t_stack	*s_(t_stack *stack, char c)
{
	t_stack	*tmp;

	tmp = get_last_node(stack);
	tmp->next = stack->next;
	tmp = stack->next;
	stack->next = stack->next->next;
	tmp->next = stack;
	if (c == 'a')
		write (1, "sa\n", 3);
	else if (c == 'b')
		write (1, "sb\n", 3);
	return (tmp);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	*stack_a = s_(*stack_a, 0);
	*stack_b = s_(*stack_b, 0);
	ft_putstr_fd("ss\n", 1);
}
