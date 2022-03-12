/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:46:31 by ydahni            #+#    #+#             */
/*   Updated: 2022/03/11 05:41:34 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include "push_swap.h"

void	sa_b(t_node **stack);
void	sb_b(t_node **stack);
void	ss_b(t_node **stack_a, t_node **stack_b);
void	ra_b(t_node **stack);
void	rb_b(t_node **stack);
void	rr_b(t_node **stack_a, t_node **stack_b);
void	rra_b(t_node **stack);
void	rrb_b(t_node **stack);
void	rrr_b(t_node **stack_a, t_node **stack_b);
void	push_stack_b_b(t_node **stack_a, t_node **stack_b);
void	push_stack_a_b(t_node **stack_a, t_node **stack_b);
int		ft_strlen(char *s);
char	*ft_substr(char *s, int start, int len);
char	*ft_strjoin(char *s1, char *s2);
int		chercheline(char *str);
char	*get_line(int fd, char *a);
char	*beforline(char *a);
char	*get_next_line(int fd);
int		ft_strchr(char *str);

#endif
