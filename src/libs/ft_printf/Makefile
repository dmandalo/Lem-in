# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/06 18:56:22 by dmandalo          #+#    #+#              #
#    Updated: 2020/09/14 14:41:52 by dmandalo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCDIR = srcs

SRC = 	$(addprefix $(SRCDIR)/,ft_printf.c parse_params.c process_format.c\
		process_cs.c unicode.c process_d.c process_u.c process_o.c\
		process_x.c process_b.c process_float.c float_arithmethic.c process_a.c\
		process_efg.c process_efg_2.c output.c colors.c libft/ft_atoi.c\
		libft/ft_strlen.c libft/ft_memset.c libft/ft_bzero.c libft/ft_strnequ.c)

OBJ = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $@ $(OBJ)
	@ranlib $@

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) -I./includes $(CFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
