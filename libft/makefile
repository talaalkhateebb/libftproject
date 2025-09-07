# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talkhati <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/19 16:55:34 by talkhati          #+#    #+#              #
#    Updated: 2025/08/19 16:57:48 by talkhati         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS        = ft_isalpha.c
OBJS        = $(SRCS:.c=.o)
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
NAME        = libft.a
all: $(NAME)
$(NAME): $(OBJS)
    ar rcs $(NAME) $(OBJS)
$(OBJS): $(SRCS)
    ${CC} $(CFLAGS) -c $(SRCS)
clean:
    rm -f $(OBJS)
fclean: clean
    rm -f $(NAME)
re: fclean $(NAME)
.PHONY: clean fclean all re

