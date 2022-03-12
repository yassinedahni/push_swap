/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:34:08 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/11 20:00:19 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_sort(t_node **stack_a, t_node **stack_b)
{
	int	size_stack;

	size_stack = calcul_stack(stack_a);
	if (size_stack == 2)
		sort_2(stack_a);
	else if (size_stack == 3)
		sort_3(stack_a);
	else if (size_stack == 4)
		sort_4(stack_a, stack_b);
	else if (size_stack == 5)
		sort_5(stack_a, stack_b);
	else if (size_stack > 5)
		sort_all(stack_a, stack_b);
}

void	check(t_node **stack_a)
{
	check_double(stack_a);
	if (!check_sort(stack_a))
		exit (1);
	index_sort(stack_a);
}

void	check_max(long c)
{
	if (c > 2147483647 || c < -2147483648)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

int	main(int ac, char **av)
{
	int		i;
	long	c;
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*temp;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			check_digit(av[i]);
			c = ft_atoi(av[i]);
			check_max(c);
			temp = creation_nodes(c, temp, 0);
			add_node_last(temp, &stack_a);
			i++;
		}
		check(&stack_a);
	}
	push_swap_sort(&stack_a, &stack_b);
	return (0);
}
