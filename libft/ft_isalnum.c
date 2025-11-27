/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 08:43:58 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/10 09:03:51 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int main(int argc, char **argv)
{
    char    c;
    (void)argc;
    c = argv[1][0];
    printf("ft_isalnum\n");
    if (ft_isalnum(c) == 1)
        printf("%d est un caractère alphanumérique.\n", c);
    else
        printf("%d n'est pas un caractère alphanumérique>\n", c);
    printf("isdigit\n");
    if (ft_isalnum(c) == 1)
        printf("%d est un caractère alphanumérique.\n", c);
    else
        printf("%d n'est pas un caractère alphanumérique.\n", c);    
}*/
