/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:41:41 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/19 17:06:20 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str_memchr[] = "stéphanie";
	char	*ptr_memchr;
	char	*ptr_ft_memchr;
	char	c = 'p';
	ptr_memchr = memchr(str_memchr, c, 8);
	printf("L'adresse de retour avec memchr est : %p\n", ptr_memchr); 
	ptr_ft_memchr = ft_memchr(str_memchr, c, 8);
	printf("L'adresse de retour avec ft_memchr est : %p\n", ptr_ft_memchr);
}*/
