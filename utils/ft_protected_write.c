/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_protected_write.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:12:18 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/28 12:14:45 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_protected_write(char c)
{
	int	result;

	result = write(1, &c, 1);
	if (result == -1)
		return (-1);
	return (1);
}
