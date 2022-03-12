/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:41:11 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/10 18:12:47 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calcul_stack(t_node **stack)
{
	int		i;
	t_node	*head;

	head = *stack;
	i = 0;
	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

void	index_stack(t_node **stack, int *str, int size)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = *stack;
	while (i < size)
	{
		temp = *stack;
		while (temp != NULL)
		{
			if (str[i] == temp->data)
			{
				temp->index = i;
			}
			temp = temp->next;
		}
		i++;
	}
}

void	index_sort(t_node **stack_a)
{
	int		*str;
	int		i;
	int		size;
	t_node	*head;

	i = 0;
	size = calcul_stack(stack_a);
	head = *stack_a;
	str = malloc(sizeof(t_node) * size);
	while (head != NULL)
	{
		str[i] = head->data;
		head = head->next;
		i++;
	}
	ft_sort_int_tab(str, size);
	index_stack(stack_a, str, size);
	free(str);
}

int	first_in_stack(t_node **stack, int min, int max)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = *stack;
	while (temp)
	{
		if (temp->index >= min && temp->index <= max)
		{
			return (i);
		}
		temp = temp->next;
		i++;
	}
	return (0);
}
