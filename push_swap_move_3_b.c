/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_3_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:19:20 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/11 19:12:02 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	rra_b(t_node **stack)
{
	t_node	*temp;
	t_node	*temp1;
	int		index_1;

	temp1 = NULL;
	temp = *stack;
	if (calcul_stack(stack) > 1)
	{
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		index_1 = temp->next->index;
		temp1 = creation_nodes(temp->next->data, temp1, index_1);
		add_node_front(temp1, stack);
		free(temp->next);
		temp->next = NULL;
	}
}

void	rrb_b(t_node **stack)
{
	t_node	*temp;
	t_node	*temp1;
	int		index_1;

	temp1 = NULL;
	temp = *stack;
	if (calcul_stack(stack) > 1)
	{
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		index_1 = temp->next->index;
		temp1 = creation_nodes(temp->next->data, temp1, index_1);
		add_node_front(temp1, stack);
		free(temp->next);
		temp->next = NULL;
	}
}

void	rrr_b(t_node **stack_a, t_node **stack_b)
{
	rra_b(stack_a);
	rrb_b(stack_b);
}
