/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:07:58 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/27 16:24:34 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_ptr(void *ptr)
{
	unsigned long	nb;
	int				len;
	int				result;

	len = 0;
	nb = (unsigned long)ptr;
	result = ft_printf_str("0x");
	if (result == -1)
		return (-1);
	len +=2;
	if (!ptr)
	{
		result = ft_protected_write('0');
		if (result == -1)
			return (-1);
		return(3);
	}
	else
	{
		result = ft_putnbr_hexa(nb);
		if (result == -1)
			return (-1);
		len += result;
	return (len);
	}
}
