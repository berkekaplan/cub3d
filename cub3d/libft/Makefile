# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaplan <@student.42kocaeli.com.tr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 09:11:37 by mkaplan           #+#    #+#              #
#    Updated: 2024/04/25 09:11:39 by mkaplan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	cc
FLAGS	=	-Wall -Wextra -Werror
MV		=	mv
OBJDIR	=	.objFiles
RM		=	rm -rf

SRC =	./split.c			\
		./strchr.c			\
		./strdup.c			\
		./strjoin.c 		\
		./strlcpy.c			\
		./strlen.c			\
		./substr.c			\
		./trim.c			\
		./strcat.c			\
		./atoi.c			\
		./isdigit.c			\
		./get_next_line.c

OBJ	= $(addprefix $(OBJDIR)/, $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
