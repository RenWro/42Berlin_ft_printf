# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/17 17:00:16 by rwrobles          #+#    #+#              #
#    Updated: 2024/12/08 17:59:54 by rwrobles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME        = libftprintf.a

# Colors for feedback
GREEN       = \033[0;32m
RED         = \033[0;31m
RESET       = \033[0m

# Paths
LIBFT_DIR   = ./libft
LIBFT_SRCS  = $(wildcard $(LIBFT_DIR)/*.c)
LIBFT_OBJS  = $(LIBFT_SRCS:.c=.o)
INCLUDE     = -I . -I $(LIBFT_DIR)

# Compiler and flags
CC          = clang
CFLAGS      = -Wall -Wextra -Werror
REMOVE      = rm -f

# Source files
SRCS        = ft_printf.c                \
              ft_argument_c.c            \
              ft_arguments_d_i.c         \
              ft_argument_p.c            \
              ft_argument_percent.c      \
              ft_argument_s.c            \
              ft_argument_u.c            \
              ft_arguments_x.c           \
              ft_print_reversed_str.c    \
              ft_free_ptr.c              \
              ft_hex_length.c            \
              ft_decimal_length.c        \
              ft_decimal_converter_to_hex.c

# Object files
OBJS        = $(SRCS:.c=.o)

# Main rules
all: $(NAME)

# Rule to build the printf library
$(NAME): $(OBJS) $(LIBFT_OBJS)
	@echo "$(GREEN)Creating the library $(NAME)...$(RESET)"
	@ar -rcs $(NAME) $(OBJS) $(LIBFT_OBJS)

# Rule to build objects from libft
$(LIBFT_OBJS): %.o: %.c
	@echo "Compiling libft object $<..."
	$(CC) $(CFLAGS) -c $< -o $@

# Compile .c files into .o files
%.o: %.c
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# Test rule
main: $(NAME)
	@$(CC) $(CFLAGS) -o main main.c $(NAME) $(INCLUDE)
	@echo "$(GREEN)Main executable created!$(RESET)"

# Clean object files
clean:
	make clean -C $(LIBFT_DIR)
	@$(REMOVE) $(OBJS) $(LIBFT_OBJS)
	@echo "$(RED)Object files removed!$(RESET)"

# Clean all files, including the libraries
fclean: clean
	make fclean -C $(LIBFT_DIR)
	@$(REMOVE) $(NAME)
	@echo "$(RED)Library $(NAME) removed!$(RESET)"

# Rebuild everything
re: fclean all

# Check Norminette
norm:
	@norminette

.PHONY: all clean fclean re norm main
