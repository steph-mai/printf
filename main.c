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
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int				result;
	int				myresult;

	char 			c = 'S';
	char			*s = "Stephanie";
	int				nb = 1478;
	int				*ptr = &nb;
	unsigned int 	u = 455;
	char			*empty = "";
	int				min = INT_MIN;
	int				max = INT_MAX;
	unsigned int	umax = UINT_MAX;
		
	/* ======================= %c ======================= */
	printf("\nTEST %%c\n");
	result = printf("%c", c);
	printf("\n");
	myresult = ft_printf("%c", c);
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %%c (NULL char)\n");
	result = printf("%c", 0);
	printf("\n");
	myresult = ft_printf("%c", 0);
	printf("\nresult = %d | myresult = %d", result, myresult);


	/* ======================= %s ======================= */
	printf("\n\nTEST %%s\n");
	result = printf("%s", s);
	printf("\n");
	myresult = ft_printf("%s", s);
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %%s (empty string)\n");
	result = printf("%s", empty);
	printf("\n");
	myresult = ft_printf("%s", empty);
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %%s (NULL)\n");
	result = printf("%s", NULL);
	printf("\n");
	myresult = ft_printf("%s", NULL);
	printf("\nresult = %d | myresult = %d", result, myresult);


	/* ======================= %p ======================= */
	printf("\n\nTEST %%p\n");
	result = printf("%p", ptr);
	printf("\n");
	myresult = ft_printf("%p", ptr);
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %%p (NULL)\n");
	result = printf("%p", NULL);
	printf("\n");
	myresult = ft_printf("%p", NULL);
	printf("\nresult = %d | myresult = %d", result, myresult);


	/* ======================= %d ======================= */
	printf("\n\nTEST %%d\n");
	result = printf("%d", nb);
	printf("\n");
	myresult = ft_printf("%d", nb);
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %%d (negatif)\n");
	result = printf("%d", -42);
	printf("\n");
	myresult = ft_printf("%d", -42);
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %%d (INT_MIN)\n");
	result = printf("%d", min);
	printf("\n");
	myresult = ft_printf("%d", min);
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %%d (INT_MAX)\n");
	result = printf("%d", max);
	printf("\n");
	myresult = ft_printf("%d", max);
	printf("\nresult = %d | myresult = %d", result, myresult);


	/* ======================= %i ======================= */
	printf("\n\nTEST %%i\n");
	result = printf("%i", nb);
	printf("\n");
	myresult = ft_printf("%i", nb);
	printf("\nresult = %d | myresult = %d", result, myresult);


	/* ======================= %u ======================= */
	printf("\n\nTEST %%u\n");
	result = printf("%u", u);
	printf("\n");
	myresult = ft_printf("%u", u);
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %%u (UINT_MAX)\n");
	result = printf("%u", umax);
	printf("\n");
	myresult = ft_printf("%u", umax);
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %%u (-1 cast)\n");
	result = printf("%u", -1);
	printf("\n");
	myresult = ft_printf("%u", -1);
	printf("\nresult = %d | myresult = %d", result, myresult);


	/* ======================= %x ======================= */
	printf("\n\nTEST %%x\n");
	result = printf("%x", nb);
	printf("\n");
	myresult = ft_printf("%x", nb);
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %%x (0)\n");
	result = printf("%x", 0);
	printf("\n");
	myresult = ft_printf("%x", 0);
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %%x (-1 cast)\n");
	result = printf("%x", -1);
	printf("\n");
	myresult = ft_printf("%x", -1);
	printf("\nresult = %d | myresult = %d", result, myresult);


	/* ======================= %X ======================= */
	printf("\n\nTEST %%X\n");
	result = printf("%X", nb);
	printf("\n");
	myresult = ft_printf("%X", nb);
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %%X (UINT_MAX)\n");
	result = printf("%X", umax);
	printf("\n");
	myresult = ft_printf("%X", umax);
	printf("\nresult = %d | myresult = %d", result, myresult);


	/* ======================= %% ======================= */
	printf("\n\nTEST %%%%\n");
	result = printf("%%%%");
	printf("\n");
	myresult = ft_printf("%%%%");
	printf("\nresult = %d | myresult = %d", result, myresult);

	printf("\n\nTEST %% avec argument\n");
	result = printf("%% %d %%", 42);
	printf("\n");
	myresult = ft_printf("%% %d %%", 42);
	printf("\nresult = %d | myresult = %d", result, myresult);


	/* ======================= COMBINES ======================= */
	printf("\n\nTEST COMBINES\n");
	result = printf("%c %s %p %d %x %%", c, s, ptr, nb, nb);
	printf("\n");
	myresult = ft_printf("%c %s %p %d %x %%", c, s, ptr, nb, nb);
	printf("\nresult = %d | myresult = %d", result, myresult);

	return (0);
}
