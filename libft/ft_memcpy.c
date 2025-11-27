/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:02:34 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/10 17:55:12 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dest;
	i = 0;
	if (dest == src)
		return (dest);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int		main(void)
{
	char src[] = "stephanie";
	char dest1[100];
	char dest2[100];
	memcpy(dest1, src, ft_strlen(src) + 1);
	printf("memcpy : %s, %s\n", src, dest1);
	ft_memcpy(dest2, src, ft_strlen(src) + 1);
	printf("ft_memcpy : %s, %s\n", src, dest2);
	return (0);
}*/
