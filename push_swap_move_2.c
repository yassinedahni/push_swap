/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:18:22 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/10 18:12:47 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **stack)
{
	int		value;
	int		index_1;
	t_node	*temp;
	t_node	*temp1;

	temp1 = NULL;
	value = (*stack)->data;
	index_1 = (*stack)->index;
	temp1 = creation_nodes(value, temp1, index_1);
	add_node_last(temp1, stack);
	temp = (*stack)->next;
	free(*stack);
	*stack = temp;
	write (1, "ra\n", 3);
}

void	rb(t_node **stack)
{
	int		value;
	int		index_1;
	t_node	*temp;
	t_node	*temp1;

	temp1 = NULL;
	value = (*stack)->data;
	index_1 = (*stack)->index;
	temp1 = creation_nodes(value, temp1, index_1);
	add_node_last(temp1, stack);
	temp = (*stack)->next;
	free(*stack);
	*stack = temp;
	write (1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write (1, "rr\n", 3);
}
