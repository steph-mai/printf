/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:29:16 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/28 12:28:02 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned long nb)
{
	char	*base;	
	int		len;
	int		result;

	len = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		result = ft_putnbr_hexa(nb / 16);
		if (result == -1)
			return (-1);
		len += result;
	}
	result = ft_protected_write(base[nb % 16]);
	if (result == -1)
		return (-1);
	len++;
	return (len);
}
