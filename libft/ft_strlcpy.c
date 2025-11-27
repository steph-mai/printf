/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:17:51 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/14 09:38:09 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	i = 0;
	len_src = ft_strlen(src);
	if (dest == NULL || size == 0)
		return (len_src);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}

/*#include <bsd/string.h> 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest1[12];
	char	src1[] = "hello";
	char	dest2[12];
	char	src2[] = "hello";

	printf("return  strlcpy = %zu\n", strlcpy(dest1, src1, 12));
	printf("dest = %s\n", dest1);
	printf("return  ft_strlcpy = %zu\n", ft_strlcpy(dest2, src2, 12));
	printf("dest = %s\n", dest2);
	return (0);
}*/
