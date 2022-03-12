/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:59:47 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/11 18:44:49 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct node
{
	int				data;
	int				index;
	struct node		*next;
}	t_node;

typedef struct call
{
	int	min;
	int	push;
	int	max;
	int	med;
	int	size_stack;
}	t_call;

t_node	*creation_nodes(int value, t_node *new_node, int index);
void	add_node_last(t_node *temp, t_node **head);
void	add_node_front(t_node *temp, t_node **head);
void	push_index_b(t_node **stack_a, t_node **stack_b);
void	printList(t_node **head);
void	check_digit(char *str);
void	check_double(t_node **stack);
void	ft_sort_int_tab(int *tab, int size);
void	index_stack(t_node **stack, int *str, int size);
void	index_sort(t_node **stack_a);
int		ft_isdigit(char *str);
long	ft_atoi(const char *str);
int		ft_strcmp(char *str1, char *str2);
int		check_sort(t_node **stack);
int		first_in_stack(t_node **stack, int min, int max);
int		find_min_value(t_node **stack);
int		cherche_place_value(t_node **stack, int value);
int		cherche_place_index(int index, t_node **stack_b);
int		min_index(t_node **stack);
int		calcul_stack(t_node **stack);
void	sa(t_node **stack);
void	sb(t_node **stack);
void	ss(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack);
void	rb(t_node **stack);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack);
void	rrb(t_node **stack);
void	rrr(t_node **stack_a, t_node **stack_b);
void	push_stack_a(t_node **stack_a, t_node **stack_b);
void	push_stack_b(t_node **stack_a, t_node **stack_b);
void	sort_2(t_node **sort_2);
void	sort_3(t_node **sort_3);
void	sort_4(t_node **stack_a, t_node **stack_b);
void	sort_4_p_1(t_node **stack_a, t_node **stack_b);
void	sort_4_p_2(t_node **stack_a, t_node **stack_b);
void	sort_4_p_3(t_node **stack_a, t_node **stack_b);
void	sort_5(t_node **stack_a, t_node **stack_b);
void	sort_5_p_1(t_node **stack_a, t_node **stack_b);
void	sort_5_p_2(t_node **stack_a, t_node **stack_b);
void	sort_5_p_3(t_node **stack_a, t_node **stack_b);
void	sort_5_p_4(t_node **stack_a, t_node **stack_b);
void	sort_all(t_node **stack_a, t_node **stack_b);

#endif