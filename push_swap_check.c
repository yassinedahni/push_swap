/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 03:48:24 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/12 21:43:16 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char *str)
{
	long	r;
	int		i;
	int		c;

	i = 0;
	r = 0;
	c = 1;
	if (!str[i])
	{
		write (2, "Error\n", 6);
		exit(1);
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c *= -1;
		i++;
	}
	while (str[i])
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (c * r);
}

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
		{
			return (0);
		}
		else if (str[i] == '-' || str[i] == '+')
		{
			i++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

void	check_digit(char *str)
{
	if (!ft_isdigit(str))
	{
		write (2, "Error\n", 6);
		exit(1);
	}
}

void	check_double(t_node **stack)
{
	t_node	*head;
	t_node	*temp;

	head = *stack;
	while (head)
	{
		temp = head->next;
		while (temp)
		{
			if (head->data == temp->data)
			{
				write (2, "Error\n", 6);
				exit(1);
			}
			temp = temp->next;
		}
		head = head->next;
	}
}

int	check_sort(t_node **stack)
{
	t_node	*head;

	head = *stack;
	while (head->next != NULL)
	{
		if (head->data > head->next->data)
			return (1);
		head = head->next;
	}
	return (0);
}
