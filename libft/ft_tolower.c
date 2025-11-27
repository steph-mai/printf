/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:50:29 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/13 15:32:29 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	c;
	int		result_tolower;
	int		result_ft_tolower;

	c = 'i';
	printf("Le caractère est : %c\n", c);
	result_tolower = tolower(c);
	printf("avec tolower, result = %d\n", result_tolower);
	result_ft_tolower = ft_tolower(c);
	printf("avec ft_tolower, result = %d\n", result_tolower);
}*/
