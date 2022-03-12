/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push_stack_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:20:15 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/12 22:06:59 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	push_stack_b_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*head;
	t_node	*head1;
	t_node	*temp;
	int		value_1;
	int		index_1;

	temp = NULL;
	if (calcul_stack(stack_a) != 0)
	{
		head = (*stack_a);
		head1 = (*stack_a);
		value_1 = head->data;
		index_1 = head->index;
		head = head->next;
		free(head1);
		*stack_a = head;
		temp = creation_nodes(value_1, temp, index_1);
		add_node_front(temp, stack_b);
	}
}

void	push_stack_a_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*head;
	t_node	*head1;
	t_node	*temp;
	int		value_1;
	int		index_1;

	temp = NULL;
	if (calcul_stack(stack_b) != 0)
	{
		head = (*stack_b);
		head1 = (*stack_b);
		value_1 = head->data;
		index_1 = head->index;
		head = head->next;
		free(head1);
		*stack_b = head;
		temp = creation_nodes(value_1, temp, index_1);
		add_node_front(temp, stack_a);
	}
}
