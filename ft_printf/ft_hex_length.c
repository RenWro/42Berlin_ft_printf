/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:17:43 by rwrobles          #+#    #+#             */
/*   Updated: 2024/12/03 20:18:35 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hex_length(unsigned long nbr)
{
	int	length;

	length = 0;
	while (nbr > 0)
	{
		nbr /= 16;
		length++;
	}
	return (length);

