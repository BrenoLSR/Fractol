# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/07 14:41:01 by brendos-          #+#    #+#              #
#    Updated: 2025/12/07 16:08:44 by brendos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
EXEC = $(BIN_DIR)/$(NAME)

SRC_DIR = .
OBJ_DIR = obj
BIN_DIR = bin
INCLUDE_DIR = .

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
MLX_DIR = minilibx-linux
MLX = $(MLX_DIR)/libmlx.a

SRC_FILES = fractol.c \
		utils.c \
		utils_control.c \
		utils_fractol.c \
		utils_setup.c

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))
HEADERS = fractal.h
DEPS = $(OBJS:.o=.d)

CC = cc
AR = ar
ARFLAGS = crs

CCFLAGS = -Wall -Wextra -Werror -g
DEPFLAGS = -MMD -MP
IFLAGS = -I$(INCLUDE_DIR) -I$(LIBFT_DIR) -I$(MLX_DIR)
LDFLAGS = -L$(LIBFT_DIR) -L$(MLX_DIR)
LDLIBS := -lft -lmlx -lXext -lX11 -lm -lz

RM = rm
RMFLAGS = -rf

all: $(MLX) $(LIBFT) $(EXEC)

-include $(DEPS)

$(LIBFT) :
		@echo "[\033[0;33m...\033[0m] Creating libft..."
		@$(MAKE) -C $(LIBFT_DIR) --silent

$(MLX):
		@echo "[\033[0;33m...\033[0m] Creating MiniLibX..."
		@$(MAKE) -C $(MLX_DIR) --silent

$(EXEC) : $(OBJS)
		@mkdir -p $(BIN_DIR)
		@$(CC) $(CCFLAGS) $(OBJS) $(LDFLAGS) $(LDLIBS) -o $(EXEC)
		@echo "[\033[0;32mOK\033[0m] $(NAME) compiled in $(BIN_DIR)/!"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(HEADERS)
		@mkdir -p $(OBJ_DIR)
		@$(CC) $(CCFLAGS) $(IFLAGS) $(DEPFLAGS) -c $< -o $@
		@echo "[\033[0;32mOK\033[0m] Compiled $<"

clean :
		@$(RM) $(RMFLAGS) $(OBJ_DIR)
		@$(MAKE) -C $(LIBFT_DIR) clean --silent
		@$(MAKE) -C $(MLX_DIR) clean --silent

fclean : clean
		@$(RM) $(RMFLAGS) $(BIN_DIR)
		@$(MAKE) -C $(LIBFT_DIR) fclean --silent

re : fclean all
		$(info Project rebuild!)

.PHONY: all clean fclean re
