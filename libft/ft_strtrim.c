/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:21:36 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/19 17:18:56 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_count_start_set(char const *s, char const *set)
{
	size_t	count_start;
	size_t	i;

	count_start = 0;
	i = 0;
	while (s[i] && (ft_is_set(s[i], set) == 1))
	{
		i++;
		count_start++;
	}
	return (count_start);
}

static size_t	ft_count_end_set(char const *s, char const *set)
{
	size_t	count_end;
	size_t	len;

	count_end = 0;
	len = ft_strlen(s);
	while (len > 0 && ft_is_set(s[len - 1], set))
	{
		count_end++;
		len--;
	}
	return (count_end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*new;
	size_t	count_start;
	size_t	count_end;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	count_start = ft_count_start_set(s1, set);
	count_end = ft_count_end_set(s1, set);
	if (count_start + count_end > len)
		return (new = ft_strdup(""));
	new = ft_substr(s1, count_start, len - count_start - count_end);
	if (new == NULL)
		return (NULL);
	return (new);
}

/*# include <stdio.h>

int	main(int argc, char **argv)
{
	char	*new;
	
	(void)argc;
	new = ft_strtrim(argv[1], argv[2]);
	printf("La nouvelle chaîne est : %s\n", new);
	return (0);
}*/
