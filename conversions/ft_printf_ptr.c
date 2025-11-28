/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:07:58 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/28 12:06:36 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_ptr(void *ptr)
{
	unsigned long	nb;
	int				len;
	int				result;

	if (!ptr)
	{
		result = ft_protected_str("(nil)");
		if (result == -1)
			return (-1);
		return (5);
	}
	len = 0;
	nb = (unsigned long)ptr;
	result = ft_protected_str("0x");
	if (result == -1)
		return (-1);
	len += result;
	result = ft_putnbr_hexa(nb);
	if (result == -1)
		return (-1);
	len += result;
	return (len);
}
