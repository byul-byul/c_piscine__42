# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/13 21:37:10 by bgadzhil          #+#    #+#              #
#    Updated: 2023/03/22 20:59:35 by bgadzhil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

D_SRC	=	./srcs/
D_HDR	=	./includes/

CMPL	=	cc
FLGS	=	-Wall -Wextra -Werror

SRCS	=	$(D_SRC)ft_putchar.c \
			$(D_SRC)ft_strcmp.c \
			$(D_SRC)ft_strlen.c \
			$(D_SRC)ft_swap.c \
			$(D_SRC)ft_putstr.c

OBJS	=	$(D_SRC)ft_putchar.o \
			$(D_SRC)ft_strcmp.o \
			$(D_SRC)ft_strlen.o \
			$(D_SRC)ft_swap.o \
			$(D_SRC)ft_putstr.o

all: ${NAME}
        
${NAME}:
	$(CMPL) $(FLGS) -c $(D_SRC)ft_putchar.c		-o $(D_SRC)ft_putchar.o	-I $(D_HDR)
	$(CMPL) $(FLGS) -c $(D_SRC)ft_strcmp.c		-o $(D_SRC)ft_strcmp.o	-I $(D_HDR)
	$(CMPL) $(FLGS) -c $(D_SRC)ft_strlen.c		-o $(D_SRC)ft_strlen.o	-I $(D_HDR)
	$(CMPL) $(FLGS) -c $(D_SRC)ft_swap.c		-o $(D_SRC)ft_swap.o	-I $(D_HDR)
	$(CMPL) $(FLGS) -c $(D_SRC)ft_putstr.c		-o $(D_SRC)ft_putstr.o	-I $(D_HDR)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm $(NAME)

re:		fclean all

.PHONY:	all clean fclean re 