/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:11:25 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/28 12:27:51 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_verif_format(char c)
{
	char	*format;
	size_t	i;

	i = 0;
	format = "cspdiuxX%";
	while (format[i])
	{
		if (c == format[i])
			return (1);
		i++;
	}
	return (-1);
}

int	ft_select_function(char c, va_list *args)
{
	int	len;

	len = 0;
	if (ft_verif_format(c) == -1)
		return (-1);
	if (c == '%')
		len = ft_printf_modulo();
	else if (c == 'c')
		len = ft_protected_write(va_arg(*args, int));
	else if (c == 's')
		len = ft_printf_str(va_arg(*args, char *));
	else if (c == 'p')
		len = ft_printf_ptr(va_arg(*args, void *));
	else if (c == 'd' || c == 'i')
		len = ft_printf_int(va_arg(*args, int));
	else if (c == 'u')
		len = ft_printf_unsigned(va_arg(*args, unsigned int));
	else if (c == 'x')
		len = ft_printf_lowhexa(va_arg(*args, unsigned int));
	else if (c == 'X')
		len = ft_printf_uphexa(va_arg(*args, unsigned int));
	if (len == -1)
		return (-1);
	return (len);
}
