/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:19:57 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/14 17:29:32 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (malloc(0));
	tab = malloc(size * nmemb);
	if (tab == NULL)
		return (NULL);
	if (nmemb * size != 0)
		ft_bzero(tab, nmemb * size);
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	char	tab[] = "Stephanie";
	char	*result;
	
	result = ft_calloc(15, 4);
	printf("chaîne initiale = %s\n", tab);
	printf("adresse de retour avec ft_calloc = %p\n", result);
	printf("Le premier octet doit être '\\0', ici tab[0]== %d\n", result[0]);
}*/
