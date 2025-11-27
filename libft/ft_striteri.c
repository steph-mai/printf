/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:08:12 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/18 09:58:46 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			len;

	i = 0;
	if (!s)
		return ;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void	ft_toupper_even(unsigned int i, char *c)
{

	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
       		*c -= 32;
}

int main(void)
{
    char            s[] = "stephanie";    
    
    ft_striteri(s, ft_toupper_even);
    printf("%s\n", s);
    return (0);     
}*/
