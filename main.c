/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:10:02 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/27 16:49:27 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int				result;
	int				myresult;

	char 			c = 'S';
	char			*s = "Stephanie";
	int				*ptr;
	int				nb = 1478;
	unsigned int 	u = 455;
	
	*ptr = nb;
	result = printf("deux modulos : %%");
	printf("\n");
	myresult = ft_printf("deux modulos : %%", c);
	printf("\n");
	printf("result = %d | myresult = %d", result, myresult);
	printf("\n\n");
	result = printf("%c", c);
	printf("\n");
	myresult = ft_printf("%c", c);
	printf("\n");
	printf("result = %d | myresult = %d", result, myresult);
	printf("\n\n");
	result = printf("%s", s);
	printf("\n");
	myresult = ft_printf("%s", s);
	printf("\n");
	printf("result = %d | myresult = %d", result, myresult);
	printf("\n\n");
	result = printf("%p", ptr);
	printf("\n");
	myresult = ft_printf("%p", ptr);
	printf("\n");
	printf("result = %d | myresult = %d", result, myresult);
	printf("\n\n");
	result = printf("%d", nb);
	printf("\n");
	myresult = ft_printf("%d", nb);
	printf("\n");
	printf("result = %d | myresult = %d", result, myresult);
	printf("\n\n");
	result = printf("%i", nb);
	printf("\n");
	myresult = ft_printf("%i", nb);
	printf("\n");
	printf("result = %i | myresult = %i", result, myresult);
	printf("\n\n");
	result = printf("%u", u);
	printf("\n");
	myresult = ft_printf("%u", u);
	printf("\n");
	printf("result = %u | myresult = %u", result, myresult);
	printf("\n\n");
	result = printf("%x", nb);
	printf("\n");
	myresult = ft_printf("%x", nb);
	printf("\n");
	printf("result = %x, result | myresult = %x", result, myresult);
	printf("\n\n");
	result = printf("%X", nb);
	printf("\n");
	myresult = ft_printf("%X", nb);
	printf("\n");
	printf("result = %X, result | myresult = %X", result, myresult);
	printf("\n\n");
	result = printf("%c %s %p", c, s, ptr);
	printf("\n");
		myresult = ft_printf("%c %s %p", c, s, ptr);
	printf("\n");
	printf("result = %d | myresult = %d", result, myresult);
}
