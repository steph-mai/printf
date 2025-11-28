/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uphexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steph <steph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:29:27 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/28 10:08:01 by steph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putnbr_uphexa(unsigned int nb)
{
	char	*base;	
	int		len;
	int		result;
	
	len = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		result = ft_putnbr_uphexa(nb / 16);
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