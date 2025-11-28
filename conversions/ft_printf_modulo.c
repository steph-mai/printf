/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_modulo.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steph <steph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:44:18 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/28 10:11:35 by steph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_modulo()
{
	int		result;
	
	result = ft_protected_write('%');
	if (result == -1)
		return (-1);
	return (1);
}