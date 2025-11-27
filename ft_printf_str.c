/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:13:14 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/27 16:25:05 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_str(char *s)
{
	int	i;
	int	result;
	
	if (s == NULL)
		s = "(null)";
	i = 0;
	while (s[i])
	{
		result = ft_protected_write(s[i]);
		if (result == -1)
			return (-1);
		i++;
	}
	return (i);
}