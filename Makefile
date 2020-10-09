# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/02 21:14:24 by dmandalo          #+#    #+#              #
#    Updated: 2020/09/14 15:35:01 by dmandalo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := lem-in

SRCSFILES := main.c store_file.c read_input.c validate.c error.c\
			build_anthill.c prepare_colony.c explore_anthill.c\
			pathfinding.c open_the_gates.c queue.c paths.c\
			
SRCS_DIR := src

LIBS_DIR := $(SRCS_DIR)/libs

OBJS := $(SRCSFILES:.c=.o)

OBJ_DIR := obj

LFT := libft.a

LFTPRINTF := libftprintf.a

LFT_DIR := $(LIBS_DIR)/libft

LFTPRINTF_DIR := $(LIBS_DIR)/ft_printf

HEADERS := lemin.h libft.h ft_printf.h

HEADERS_DIR := include $(LFT_DIR) $(LFTPRINTF_DIR)/includes

CC := gcc -Wall -Werror -Wextra

vpath %.c $(SRCS_DIR) $(SRCS_DIR)/alg
vpath %.o $(OBJ_DIR)
vpath %.h $(HEADERS_DIR)
vpath %.a $(LFT_DIR) $(LFTPRINTF_DIR)

all: $(NAME)

$(NAME): $(LFT) $(LFTPRINTF) $(OBJS)
	@$(CC) $(addprefix $(OBJ_DIR)/, $(OBJS)) $(INCLUDE) -lft -L $(LFT_DIR) -lftprintf -L $(LFTPRINTF_DIR) $(SDL_LIBS) -o $@

$(OBJS): %.o: %.c $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	@$(CC) -c $< $(addprefix -I,$(HEADERS_DIR)) -o $(OBJ_DIR)/$@

$(LFT):
	@$(MAKE) -C $(LFT_DIR)
	@$(MAKE) -C $(LFT_DIR) clean

$(LFTPRINTF):
	@$(MAKE) -C $(LFTPRINTF_DIR)
	@$(MAKE) -C $(LFTPRINTF_DIR) clean

clean:
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -C $(LFT_DIR) fclean
	@$(MAKE) -C $(LFTPRINTF_DIR) fclean

fclean: clean
	@rm -f $(NAME)

re: fclean all
