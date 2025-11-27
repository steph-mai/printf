/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:42:23 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/14 09:36:51 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;
	size_t	i;
	size_t	j;

	j = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	i = len_dest;
	if (size <= len_dest)
		return (len_src + size);
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_src + len_dest);
}

/*#include <bsd/string.h>
#include <stdio.h>

int		main(void)
{
	char	src3[7] = "abcd";
	char	src4[7] = "abcd";
	char	dest7[20] = "pqrstuvwxyz";
	char	dest8[20] = "pqrstuvwxyz";
	size_t	result1;
	size_t	result2;

	result1 = strlcat(dest7, src3, 20);
	printf("result strlcat = %zu\n", result1);
	printf("dest = %s\n", dest7);
	result2 = ft_strlcat(dest8, src4, 20);
	printf("result ft_strlcat = %zu\n", result2);
	printf("dest = %s\n", dest8);
	return (0);
}*/
