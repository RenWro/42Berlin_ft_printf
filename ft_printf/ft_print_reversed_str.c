/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reversed_str.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:17:56 by rwrobles          #+#    #+#             */
/*   Updated: 2024/12/03 20:18:31 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include "libft.h"

int ft_print_reversed_str(char *str)
{
int	i;
int	bytes;

bytes = ft_strlen(str);
i = bytes - 1;
while (i >= 0)
	write(1, &str[i--], sizeof(char) * 1);
return (bytes);
}
