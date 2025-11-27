/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:31:17 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/14 09:25:58 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = NULL;
	size_t	len;

	printf("ft_strlen\n");
	printf("la longueur de la chaîne est de %zu\n", len = ft_strlen(str));
	printf("strlen\n");
	printf("la longueur de la chaîne est de %zu\n", len = strlen(str));
}*/
