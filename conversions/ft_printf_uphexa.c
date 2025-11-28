/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uphexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:12:24 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/28 12:28:02 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_uphexa(unsigned int n)
{
	int	len;

	len = ft_putnbr_uphexa(n);
	if (len == -1)
		return (-1);
	return (len);
}
