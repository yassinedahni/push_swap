/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 03:50:59 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/10 18:12:47 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*creation_nodes(int value, t_node *new_node, int index)
{
	new_node = malloc(sizeof(t_node));
	new_node->data = value;
	new_node->index = index;
	new_node->next = NULL;
	return (new_node);
}

void	add_node_front(t_node *temp, t_node **head)
{
	temp->next = (*head);
	*head = temp;
}

void	add_node_last(t_node *temp, t_node **head)
{
	t_node	*last;

	if ((*head) == NULL)
	{
		(*head) = temp;
	}
	else
	{
		last = (*head);
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
	}
}
