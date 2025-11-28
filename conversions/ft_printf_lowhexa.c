/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lowhexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:25:55 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/28 12:27:58 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_lowhexa(unsigned int n)
{
	int	len;

	len = ft_putnbr_hexa(n);
	if (len == -1)
		return (-1);
	return (len);
}
