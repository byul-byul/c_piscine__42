# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 20:43:54 by bgadzhil          #+#    #+#              #
#    Updated: 2023/03/19 19:50:11 by bgadzhil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-02

CMPL	=	cc
FLAGS	=	-Wall -Wextra -Werror

S_DIR	=	./

SRCS	=	$(S_DIR)main.c		\
			$(S_DIR)converter.c	\
			$(S_DIR)parser.c	\
			$(S_DIR)validator.c	\
			$(S_DIR)utils_1.c	\
			$(S_DIR)utils_2.c	\
			$(S_DIR)utils_3.c	\
			$(S_DIR)utils_4.c	\
			$(S_DIR)rush02.c

all: $(NAME)

$(NAME):
	$(CMPL) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:	clean
	
re: fclean all

.PHONY: all clean fclean re