/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:04:48 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/12 09:37:00 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
    printf("ft_isascii\n");
    if (ft_isascii(c) == 0)
        printf("%d n'est pas un caractère de la table ascii.\n", c);
    else
        printf("%d est pas un caractère de la table ascii\n", c);
    printf("isascii\n");
    if (isascii(c) == 0)
        printf("%d n'est pas un caractère de la table ascii.\n", c);
    else
        printf("%d est un caractère de la table ascii.\n", c);    
}*/
