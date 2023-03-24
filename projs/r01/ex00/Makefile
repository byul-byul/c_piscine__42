# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 17:03:31 by bgadzhil          #+#    #+#              #
#    Updated: 2023/03/12 21:36:10 by bgadzhil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-01
HDRS	=	rush01.h

SRCS	=	main.c \
			rush01.c \
			validator.c \
			resolver.c \
			counter.c \
			utils.c

OBJS	=	${SRCS:.c=.o}

FLGS	=	-Wall -Wextra -Werror
CMPL	=	cc

DEFARG	=	 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

all: $(NAME)

run: all
	./$(NAME) $(DEFARG)

clean:
	rm $(NAME)

re: clean all

$(NAME):
	$(CMPL) $(FLGS) $(SRCS) -o $(NAME)

.PHONY: all run clean re