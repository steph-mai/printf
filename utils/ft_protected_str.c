/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_protected_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:50:02 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/28 12:14:17 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_protected_str(char *s)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s[i])
	{
		result = ft_protected_write(s[i]);
		if (result == -1)
			return (-1);
		i++;
	}
	return (i);
}
