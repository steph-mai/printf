/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 08:51:14 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/10 08:54:55 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
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
    printf("ft_isdigit\n");
    if (ft_isdigit(c) == 1)
        printf("%d est un chiffre.\n", c);
    else
        printf("%d n'est pas un chiffre.\n", c);
    printf("isdigit\n");
    if (ft_isdigit(c) == 1)
        printf("%d est un chiffre.\n", c);
    else
        printf("%d n'est pas un chiffre.\n", c);    
}*/
