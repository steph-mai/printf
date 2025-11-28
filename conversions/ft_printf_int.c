/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:47:21 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/26 12:26:32 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_putnbr_int(long nb)
{
	int	len;
	int	result;

	len = 0;
	if (nb < 0)
	{
		result = ft_protected_write('-');
		if (result == -1)
			return (-1);
		nb = -nb;
		len ++;
	}
	if (nb >= 10)
	{
		result = ft_putnbr_int(nb / 10);
		if (result == -1)
			return (-1);
		len += result;
	}
	result = ft_protected_write(nb % 10 + '0');
	if (result == -1)
		return (-1);
	len++;
	return (len);
}

int	ft_printf_int(int nb)
{
	int	len;

	len = ft_putnbr_int((long)nb);
	if (len == -1)
		return (-1);
	return (len);
}
