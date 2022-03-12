# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 00:33:56 by ydahni            #+#    #+#              #
#    Updated: 2022/03/11 19:47:41 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FLAGS = -Wall -Wextra -Werror
SRC = push_stack_b.c push_swap_check.c push_swap_cherche.c push_swap_move_1.c \
push_swap_move_2.c push_swap_move_3.c push_swap_node.c push_swap_push_stack.c \
push_swap_sort_4.c push_swap_sort_5.c push_swap_sort_all.c push_swap_sort.c \
push_swap_utl.c push_swap.c \

SRC_BNS = checker.c get_next_line.c get_next_line_utils.c push_swap_move_1_b.c \
		push_swap_move_2_b.c push_swap_move_3_b.c push_swap_push_stack_b.c \
		push_swap_check.c push_swap_node.c push_swap_utl.c

all : $(NAME)

$(NAME) : $(SRC)
	@gcc $(FLAGS) $(SRC) -o $(NAME)
	@tput setaf 2; echo "PUSH_SWAP IS READY"

bonus : $(SRC_BNS)
	@gcc $(FLAGS) $(SRC_BNS) -o checker
	@tput setaf 2; echo "CHECKER IS READY"

clean:
	@rm -f $(NAME) checker
	@tput setaf 1; echo "CLEAN COMPLET"
fclean: clean

re: fclean all