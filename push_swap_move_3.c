/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:19:20 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/10 18:12:47 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **stack)
{
	t_node	*temp;
	t_node	*temp1;
	int		index_1;

	temp1 = NULL;
	temp = *stack;
	while (temp->next->next != NULL)
	{
		temp = temp->next;
	}
	index_1 = temp->next->index;
	temp1 = creation_nodes(temp->next->data, temp1, index_1);
	add_node_front(temp1, stack);
	free(temp->next);
	temp->next = NULL;
	write (1, "rra\n", 4);
}

void	rrb(t_node **stack)
{
	t_node	*temp;
	t_node	*temp1;
	int		index_1;

	temp1 = NULL;
	temp = *stack;
	while (temp->next->next != NULL)
	{
		temp = temp->next;
	}
	index_1 = temp->next->index;
	temp1 = creation_nodes(temp->next->data, temp1, index_1);
	add_node_front(temp1, stack);
	free(temp->next);
	temp->next = NULL;
	write (1, "rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	write (1, "rrr\n", 4);
}
