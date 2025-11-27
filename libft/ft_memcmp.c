/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:03:12 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/19 17:07:00 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char s1_memcmp[] = "stephanie";
	unsigned char s2_memcmp[] = "stephanie";
	
	printf("avec memcmp, result = %d\n", memcmp(s1_memcmp, s2_memcmp, 5));
	printf("avec ft_memcmp, result = %d\n", ft_memcmp(s1_memcmp, s2_memcmp, 5));
	return (0);
}*/
