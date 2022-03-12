/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 06:07:11 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/10 22:31:13 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_up(t_node **stack_a, t_node **stack_b, t_call v)
{
	int	b;

	b = first_in_stack(stack_a, v.min, v.max);
	while (b > v.size_stack / 2)
	{
		if ((*stack_a)->index >= v.min && (*stack_a)->index <= v.max)
		{
			push_stack_b(stack_a, stack_b);
			if ((*stack_b)->index < v.med)
			{
				rb(stack_b);
			}
			v.push--;
			if (v.push == 0)
				break ;
		}
		else
			rra(stack_a);
			b--;
		v.size_stack = calcul_stack(stack_a);
	}
	return (v.push);
}

int	ft_down(t_node **stack_a, t_node **stack_b, t_call v)
{
	int	b;

	b = first_in_stack(stack_a, v.min, v.max);
	while (b <= v.size_stack / 2)
	{
		if ((*stack_a)->index >= v.min && (*stack_a)->index <= v.max)
		{
			push_stack_b(stack_a, stack_b);
			if ((*stack_b)->index < v.med)
			{
				rb(stack_b);
			}
			v.push--;
			if (v.push == 0)
				break ;
		}
		else
			ra(stack_a);
		b++;
		v.size_stack = calcul_stack(stack_a);
	}
	return (v.push);
}

void	push_index_b(t_node **stack_a, t_node **stack_b)
{
	t_call	v;
	int		b;

	v.size_stack = calcul_stack(stack_a);
	while (v.size_stack > 5)
	{
		v.push = (((v.size_stack - 5) / 3) + 1);
		if (v.size_stack >= 100)
			v.push = (((v.size_stack - 5) / 5) + 1);
		v.min = min_index(stack_a);
		v.max = ((v.min + v.push) - 1);
		v.med = ((v.min + v.max) / 2);
		while (v.push > 0)
		{
			b = first_in_stack(stack_a, v.min, v.max);
			if (b > v.size_stack / 2)
				v.push = ft_up(stack_a, stack_b, v);
			else if (b <= v.size_stack / 2)
				v.push = ft_down(stack_a, stack_b, v);
		}
		v.size_stack = calcul_stack(stack_a);
	}
	sort_5(stack_a, stack_b);
}
