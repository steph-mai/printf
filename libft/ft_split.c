/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 08:29:05 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/19 17:09:33 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_dupword(const char *s, char c, int *i)
{
	int		index;
	char	*dup;
	int		j;

	j = 0;
	index = *i;
	while (s[index] && s[index] != c)
		index++;
	dup = malloc(sizeof(char) * ((index - *i) + 1));
	if (dup == NULL)
		return (NULL);
	while (*i < index)
	{
		dup[j] = s[*i];
		(*i)++;
		j++;
	}
	dup[j] = '\0';
	return (dup);
}

static void	ft_free_memory(char	**array, int j)
{
	int	k;

	k = 0;
	while (k < j)
	{
		free(array[k]);
		k++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**words_array;
	int		i;
	int		j;

	i = 0;
	j = 0;
	words_array = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (words_array == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		if (s[i] != c && s[i] != '\0')
		{
			words_array[j] = ft_dupword(s, c, &i);
			if (!words_array[j])
				return (ft_free_memory(words_array, j), NULL);
			j++;
		}
	}
	words_array[j] = NULL;
	return (words_array);
}

/*#include <stdio.h>

int	main(void)
{
	char 	**array;
	const char	s[] = "stephanie hello bonjour";
	char	c = ' ';
	int		i = 0;
	array = ft_split(s, c);
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}	
	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);	
	return(0);
}*/
