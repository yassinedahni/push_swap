/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_cherche.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 05:17:24 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/10 18:12:47 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_value(t_node **stack)
{
	t_node	*temp;
	int		value;

	temp = *stack;
	value = (*stack)->index;
	while (temp)
	{
		if (value > temp->index)
		{
			value = temp->index;
		}
		temp = temp->next;
	}
	return (value);
}

int	cherche_place_value(t_node **stack, int value)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = *stack;
	while (temp)
	{
		if (temp->index == value)
		{
			break ;
		}
		temp = temp->next;
		i++;
	}
	return (i);
}

int	cherche_place_index(int index, t_node **stack_b)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = *stack_b;
	while (temp)
	{
		if (temp->index == index)
		{
			break ;
		}
		temp = temp->next;
		i++;
	}
	return (i);
}

int	min_index(t_node **stack)
{
	int		value;
	t_node	*temp;

	temp = *stack;
	value = (*stack)->index;
	while (temp)
	{
		if (value > temp->index)
		{
			value = temp->index;
		}
		temp = temp->next;
	}
	return (value);
}
