/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:13:58 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/13 12:35:21 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dest;
	if (dest == src)
		return (dest);
	if (s2 < s1 || s2 >= s1 + n)
		ft_memcpy(s2, s1, n);
	else
	{
		while (n > 0)
		{
			n--;
			s2[n] = s1[n];
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int		main(void)
{
	char	str1[10] = "Stephanie";
	char	str2[10] = "Stephanie";

	printf("str1 = %s\n", str1);
	memmove(str1 + 1, str1, 5);
	printf("memmove : new string = %s\n", str1);
	ft_memmove(str2 + 1, str2, 5);
    printf("ft_memmove : new string = %s\n", str2);
	return (0);
}*/
