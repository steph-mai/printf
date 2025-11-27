/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 08:32:02 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/12 09:11:43 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    char    c;
    (void)argc;
    c = argv[1][0];
    printf("ft_isalpha\n");
    if (ft_isalpha(c) == 0)
        printf("%d n'est un caractère alphabétique.\n", c);
    else
        printf("%d est pas un caractère alphabétique.\n", c);
    printf("isalpha\n");
    if (isalpha(c) == 0)
        printf("%d n'est un caractère alphabétique.\n", c);
    else
        printf("%d est pas un caractère alphabétique.\n", c);    
}*/
