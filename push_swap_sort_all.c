/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_all.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 06:38:33 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/10 18:41:05 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_all_2(t_node **stack_a, t_node **stack_b, int size_stack, int i)
{
	while (i <= size_stack / 2)
	{
		if ((*stack_a)->index -1 == (*stack_b)->index)
		{
			break ;
		}
		rb(stack_b);
		i++;
		size_stack = calcul_stack(stack_b);
	}
}

void	sort_all_1(t_node **stack_a, t_node **stack_b, int size_stack)
{
	int	i;

	i = cherche_place_index((*stack_a)->index -1, stack_b);
	if (i > size_stack / 2)
	{
		while (i > size_stack / 2)
		{
			if ((*stack_a)->index -1 == (*stack_b)->index)
			{
				break ;
			}
			rrb(stack_b);
			i--;
			size_stack = calcul_stack(stack_b);
		}
	}
	else if (i <= size_stack / 2)
	{
		sort_all_2(stack_a, stack_b, size_stack, i);
	}
}

void	sort_all(t_node **stack_a, t_node **stack_b)
{
	int	size_stack;

	push_index_b(stack_a, stack_b);
	size_stack = calcul_stack(stack_b);
	while (size_stack != 1)
	{
		if ((*stack_a)->index - 1 == (*stack_b)->index)
		{
			push_stack_a(stack_a, stack_b);
		}
		while ((*stack_a)->index - 1 != (*stack_b)->index)
		{
			sort_all_1(stack_a, stack_b, size_stack);
		}
		size_stack = calcul_stack(stack_b);
	}
	push_stack_a(stack_a, stack_b);
}
