/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:23:34 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/13 15:30:54 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	c;
	int		result_toupper;
	int		result_ft_toupper;

	c = 's';
	printf("Le caractère est : %c\n", c);
	result_toupper = toupper(c);
	printf("avec toupper, result = %d\n", result_toupper);
	result_ft_toupper = ft_toupper(c);
	printf("avec ft_toupper, result = %d\n", result_toupper);
}*/
