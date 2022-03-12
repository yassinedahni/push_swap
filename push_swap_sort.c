/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:12:24 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/10 18:12:46 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_node **sort_2)
{
	sa(sort_2);
}

void	sort_3(t_node **sort_3)
{
	int	value_1;
	int	value_2;
	int	value_3;

	value_1 = (*sort_3)->data;
	value_2 = (*sort_3)->next->data;
	value_3 = (*sort_3)->next->next->data;
	if (value_1 < value_2 && value_2 > value_3 && value_3 > value_1)
	{
		rra(sort_3);
		sa(sort_3);
	}
	else if (value_1 > value_2 && value_2 < value_3 && value_3 > value_1)
		sa(sort_3);
	else if (value_1 < value_2 && value_2 > value_3 && value_3 < value_1)
		rra(sort_3);
	else if (value_1 > value_2 && value_2 < value_3 && value_3 < value_1)
		ra(sort_3);
	else if (value_1 > value_2 && value_2 > value_3 && value_3 < value_1)
	{
		sa(sort_3);
		rra(sort_3);
	}
}
