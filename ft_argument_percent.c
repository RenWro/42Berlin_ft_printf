/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_percent.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:19:34 by rwrobles          #+#    #+#             */
/*   Updated: 2024/12/07 23:16:46 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_argument_percent(void)
{
	return (write(1, "%", sizeof(char) * 1));
}
