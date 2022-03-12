/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_1_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:22:03 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/11 19:06:02 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	sa_b(t_node **stack)
{
	int		value1;
	int		value2;
	int		index1;
	int		index2;

	if (calcul_stack(stack) > 1)
	{
		value1 = (*stack)->data;
		index1 = (*stack)->index;
		value2 = (*stack)->next->data;
		index2 = (*stack)->next->index;
		(*stack)->data = value2;
		(*stack)->index = index2;
		(*stack)->next->data = value1;
		(*stack)->next->index = index1;
	}
}

void	sb_b(t_node **stack)
{
	int		value1;
	int		value2;
	int		index1;
	int		index2;

	if (calcul_stack(stack) > 1)
	{
		value1 = (*stack)->data;
		index1 = (*stack)->index;
		value2 = (*stack)->next->data;
		index2 = (*stack)->next->index;
		(*stack)->data = value2;
		(*stack)->index = index2;
		(*stack)->next->data = value1;
		(*stack)->next->index = index1;
	}
}

void	ss_b(t_node **stack_a, t_node **stack_b)
{
	sa_b(stack_a);
	sb_b(stack_b);
}
