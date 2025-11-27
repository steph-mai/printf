/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:59:44 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/17 13:01:35 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	len_s;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (sub = ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	sub = malloc (sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (s[start + i] && i < len && (start + i) < len_s)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*#include <stdio.h>

int main (void)
{
	char	s[] = "Stephanie";
	char	*sub;
	
	sub = ft_substr(s, 1, 5);
	printf("chaîne initiale = %s\n", s);
	printf("sous-chaîne = %s\n", sub);
	return (0);
}*/
