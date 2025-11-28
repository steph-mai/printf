/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steph <steph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:58:38 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/28 10:26:21 by steph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *s, ...)
{
	size_t	i;
	int		count;
	int		result;	
	va_list	args;

	if (!s)
		return(-1);
   	va_start(args, s);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
			result = ft_select_function(s[++i], &args);
		else
			result = ft_protected_write(s[i]);
		if (result == -1)
			return (va_end(args),-1);
		count += result;
		i++;
	}
	va_end(args);
	return (count);
}