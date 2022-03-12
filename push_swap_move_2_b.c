/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_2_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:18:22 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/11 19:07:28 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ra_b(t_node **stack)
{
	int		value;
	int		index_1;
	t_node	*temp;
	t_node	*temp1;

	temp1 = NULL;
	if (calcul_stack(stack) > 1)
	{
		value = (*stack)->data;
		index_1 = (*stack)->index;
		temp1 = creation_nodes(value, temp1, index_1);
		add_node_last(temp1, stack);
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}

void	rb_b(t_node **stack)
{
	int		value;
	int		index_1;
	t_node	*temp;
	t_node	*temp1;

	temp1 = NULL;
	if (calcul_stack(stack) > 1)
	{
		value = (*stack)->data;
		index_1 = (*stack)->index;
		temp1 = creation_nodes(value, temp1, index_1);
		add_node_last(temp1, stack);
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}

void	rr_b(t_node **stack_a, t_node **stack_b)
{
	ra_b(stack_a);
	rb_b(stack_b);
}
