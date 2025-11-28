/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:34:25 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/26 12:41:37 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_putnbr_unsigned(unsigned int nb)
{
	int	len;
	int	result;
	
	len = 0;
	if (nb >= 10)
	{
		result = ft_putnbr_unsigned(nb / 10);
		if (result == -1)
			return (-1);
		len += result;
	}
	result = ft_protected_write(nb % 10 + '0');
	if (result == -1)
		return(-1);
	len ++;
	return (len);	
}
int	ft_printf_unsigned(unsigned int nb)
{
	int	len;
	len = ft_putnbr_unsigned(nb);
	if (len == -1)
		return (-1);
	return (len);		
}