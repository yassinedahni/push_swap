/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_5.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 05:30:59 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/10 18:40:41 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5_p_1(t_node **stack_a, t_node **stack_b)
{
	sa(stack_a);
	push_stack_b(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	push_stack_a(stack_a, stack_b);
}

void	sort_5_p_2(t_node **stack_a, t_node **stack_b)
{
	rra(stack_a);
	rra(stack_a);
	rra(stack_a);
	push_stack_b(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	push_stack_a(stack_a, stack_b);
}

void	sort_5_p_3(t_node **stack_a, t_node **stack_b)
{
	rra(stack_a);
	rra(stack_a);
	push_stack_b(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	push_stack_a(stack_a, stack_b);
}

void	sort_5_p_4(t_node **stack_a, t_node **stack_b)
{
	rra(stack_a);
	push_stack_b(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	push_stack_a(stack_a, stack_b);
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	int	value;
	int	p;

	value = find_min_value(stack_a);
	p = cherche_place_value(stack_a, value);
	if (p == 0)
	{
		push_stack_b(stack_a, stack_b);
		sort_4(stack_a, stack_b);
		push_stack_a(stack_a, stack_b);
	}
	else if (p == 1)
		sort_5_p_1(stack_a, stack_b);
	else if (p == 2)
		sort_5_p_2(stack_a, stack_b);
	else if (p == 3)
		sort_5_p_3(stack_a, stack_b);
	else if (p == 4)
		sort_5_p_4(stack_a, stack_b);
}
