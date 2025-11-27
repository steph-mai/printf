/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_modulo.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:44:18 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/27 16:47:02 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_modulo(char c)
{
	int result;

	c = '%';
	result = write(1, &c, 1);
	if (result == -1)
		return (-1);
	return (1);
}