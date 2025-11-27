/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:26:38 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/20 10:49:48 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str_strchr[] = "Stéphanie";
	char	c = '\0';
	printf("avec ft_strchr, return = %p\n", ft_strchr(str_strchr, c));
	printf("avec strchr, return = %p\n", strchr(str_strchr, c));
	return (0);
}*/
