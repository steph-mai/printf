/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steph <steph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:58:38 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/30 17:40:26 by steph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_format(const char *s, va_list *args)
{
	size_t	i;
	int		count;
	int		result;	

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			i++;
			result = ft_select_function(s[i], args);
		}
		else
			result = ft_protected_write(s[i]);
		if (result == -1)
			return (-1);
		count += result;
		i++;
	}
	return (count);
	
}
int	ft_printf(const char *s, ...)
{
	
	va_list	args;
	int		count;
	
	if (!s)
		return (-1);
	va_start(args, s);
	count = ft_handle_format(s, &args);
	va_end(args);
	return (count);
}
