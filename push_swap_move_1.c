/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:22:03 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/10 18:32:26 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **stack)
{
	int		value1;
	int		value2;
	int		index1;
	int		index2;

	value1 = (*stack)->data;
	index1 = (*stack)->index;
	value2 = (*stack)->next->data;
	index2 = (*stack)->next->index;
	(*stack)->data = value2;
	(*stack)->index = index2;
	(*stack)->next->data = value1;
	(*stack)->next->index = index1;
	write (1, "sa\n", 3);
}

void	sb(t_node **stack)
{
	int		value1;
	int		value2;
	int		index1;
	int		index2;

	value1 = (*stack)->data;
	index1 = (*stack)->index;
	value2 = (*stack)->next->data;
	index2 = (*stack)->next->index;
	(*stack)->data = value2;
	(*stack)->index = index2;
	(*stack)->next->data = value1;
	(*stack)->next->index = index1;
	write (1, "sb\n", 3);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write (1, "ss\n", 3);
}
