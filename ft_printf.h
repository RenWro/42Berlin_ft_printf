/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:00:29 by rwrobles          #+#    #+#             */
/*   Updated: 2024/12/07 22:55:09 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

// Color prefixes avoids conflicts
# define LIBFT_GREY      "\033[0;90m"
# define LIBFT_RED       "\033[0;31m"
# define LIBFT_PURPLE    "\033[0;35m"
# define LIBFT_CYAN      "\033[0;36m"
# define LIBFT_RESET     "\033[0m"

// FT_PRINTF LIBRARY
int		ft_printf(const char *str, ...);
int		ft_argument_c(char c);
int		ft_arguments_d_i(int c);
int		ft_argument_p(unsigned long nbr);
int		ft_argument_percent(void);
int		ft_argument_s(char *str);
int		ft_argument_u(unsigned int nbr);
int		ft_arguments_x(unsigned int nbr, char type);
int		ft_decimal_length(long int nbr);
void	ft_free_ptr(char **ptr);
char	ft_decimal_converter_to_hex(char digit, char type);
int		ft_hex_length(unsigned long nbr);
int		ft_print_reversed_str(char *str);

#endif