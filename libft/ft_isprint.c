/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:18:58 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/12 09:39:31 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)

{
	if (c >= 32 && c <= 126)
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
    printf("ft_isprint\n");
    if (ft_isprint(c) == 0)
        printf("%d n'est pas un caractère printable.\n", c);
    else
        printf("%d est un caractère printable.\n", c);
    printf("isprint\n");
    if (isprint(c) == 0)
        printf("%d n'est pas un caractère printable.\n", c);
    else
        printf("%d est un caractère printable.\n", c);    

}*/
