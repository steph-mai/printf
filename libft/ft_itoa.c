/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:56:33 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/19 17:29:32 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_lennumber(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len ++;
	while (n != 0)
	{
		len++;
		n = (n / 10);
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	nb;

	nb = n;
	len = ft_lennumber(nb);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	if (nb == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	s[len] = '\0';
	while (nb > 0)
	{
		s[len - 1] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (s);
}

/*int	main(void)
{
	int		n = -9;
	char	*s;
	int		i;
	
	i = 0;
	s = ft_itoa(n);
	while (s[i])
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
}*/	
