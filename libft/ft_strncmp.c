/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:05:29 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/19 17:12:05 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] && i < (n - 1)
		&& ((unsigned char)s1[i] == (unsigned char)s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	s1_strncmp[] = "abcdefgh";
	char	s2_strncmp[] = "abcdwxyz";
	int		result_strncmp = strncmp(s1_strncmp, s2_strncmp, 4);
	int		result_ft_strncmp = ft_strncmp(s1_strncmp, s2_strncmp, 4);
	printf("avec strncmp, result = %d\n", result_strncmp);
	printf("avec ft_strncmp, result = %d\n", result_ft_strncmp);
	return (0);
}*/
