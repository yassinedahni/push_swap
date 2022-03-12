/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:45:42 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/12 22:09:55 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

void	push_swap_checker_2(t_node **stack_a, t_node **stack_b, char *a)
{
	if (ft_strcmp(a, "sa\n") == 0)
		sa_b(stack_a);
	else if (ft_strcmp(a, "sb\n") == 0)
		sb_b(stack_b);
	else if (ft_strcmp(a, "ss\n") == 0)
		ss_b(stack_a, stack_b);
	else if (ft_strcmp(a, "ra\n") == 0)
		ra_b(stack_a);
	else if (ft_strcmp(a, "rb\n") == 0)
		rb_b(stack_b);
	else if (ft_strcmp(a, "rr\n") == 0)
		rr_b(stack_a, stack_b);
	else if (ft_strcmp(a, "rra\n") == 0)
		rra_b(stack_a);
	else if (ft_strcmp(a, "rrb\n") == 0)
		rrb_b(stack_b);
	else if (ft_strcmp(a, "rrr\n") == 0)
		rrr_b(stack_a, stack_b);
	else
	{
		write (2, "Error\n", 6);
		exit(1);
	}
}

void	push_swap_checker(t_node **stack_a, t_node **stack_b)
{
	char	*a;

	a = get_next_line(0);
	while (a)
	{
		if (ft_strcmp(a, "pa\n") == 0)
			push_stack_a_b(stack_a, stack_b);
		else if (ft_strcmp(a, "pb\n") == 0)
			push_stack_b_b(stack_a, stack_b);
		else
			push_swap_checker_2(stack_a, stack_b, a);
		a = get_next_line(0);
	}
	if (!check_sort(stack_a) && !calcul_stack(stack_b))
	{
		write (1, "OK\n", 3);
	}
	else
		write (1, "KO\n", 3);
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
		check_double(&stack_a);
		push_swap_checker(&stack_a, &stack_b);
    }
}
