/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:23:26 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/19 17:12:30 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_little;

	if (!big && len == 0)
		return (NULL);
	i = 0;
	len_little = ft_strlen(little);
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i + len_little <= len)
	{
		if (ft_strncmp(big + i, little, len_little) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	big[] = "stephanie";
	char	little[] = "ph";
	char 	*result_strnstr;
	char	*result_ft_strnstr;
	result_strnstr = strnstr(big, little, 9);
	printf("%s\n", result_strnstr);
	result_ft_strnstr = ft_strnstr(big, little, 9);
	printf("%s\n", result_ft_strnstr);
}*/
