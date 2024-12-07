# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/17 17:00:16 by rwrobles          #+#    #+#              #
#    Updated: 2024/12/07 23:01:36 by rwrobles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Program name
NAME		= libftprintf.a

# Colors for feedback
GREEN		= \033[0;32m
RED			= \033[0;31m
RESET		= \033[0m

# Paths
LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a
INCLUDE		= -I ft_printf -I $(LIBFT_DIR)

# Compiler and flags
CC			= clang
FLAGS		= -Wall -Wextra -Werror
REMOVE		= rm -f

# Source files
SRCS_DIR	= ft_printf
SRCS		= $(SRCS_DIR)/ft_printf.c			\
				$(SRCS_DIR)/ft_argument_c.c		\
				$(SRCS_DIR)/ft_arguments_d_i.c	\
				$(SRCS_DIR)/ft_argument_p.c		\
				$(SRCS_DIR)/ft_argument_percent.c	\
				$(SRCS_DIR)/ft_argument_s.c		\
				$(SRCS_DIR)/ft_argument_u.c		\
				$(SRCS_DIR)/ft_arguments_x.c		\
				$(SRCS_DIR)/ft_print_reversed_str.c	\
				$(SRCS_DIR)/ft_free_ptr.c			\
				$(SRCS_DIR)/ft_hex_length.c		\
				$(SRCS_DIR)/ft_decimal_length.c	\
				$(SRCS_DIR)/ft_decimal_converter_to_hex.c

# Object files
OBJS		= $(SRCS:.c=.o)

# Main rules
all: $(NAME)

# Rule to build the printf library
$(NAME): $(OBJS) $(LIBFT)
	@echo "$(GREEN)Creating the library $(NAME)...$(RESET)"
	@ar -rcs $(NAME) $(OBJS) $(LIBFT)

# Build the libft first
$(LIBFT):
	@echo "$(GREEN)Compiling the libft...$(RESET)"
	@$(MAKE) -C $(LIBFT_DIR)

# Compile .c files into .o files
%.o: %.c
	@echo "Compiling $<..."
	@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

# Test rule
main: $(NAME)
	@$(CC) $(FLAGS) -o main main.c $(NAME) $(INCLUDE)
	@echo "$(GREEN)Main executable created!$(RESET)"

# Clean object files
clean:
	@$(MAKE) clean -C $(LIBFT_DIR)
	@$(REMOVE) $(OBJS)
	@echo "$(RED)Object files removed!$(RESET)"

# Clean all files, including the libraries
fclean: clean
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(REMOVE) $(NAME)
	@echo "$(RED)Library $(NAME) removed!$(RESET)"

# Rebuild everything
re: fclean all

# Check Norminette
norm:
	@norminette

.PHONY: all clean fclean re norm main
