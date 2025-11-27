/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:25:44 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/27 16:48:38 by stmaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include "libft.h"

int	ft_select_function(char c, va_list *args);
int	ft_protected_write(char c);
int	ft_printf_modulo(char c);
int	ft_printf_str(char *s);
int	ft_printf(const char *s, ...);
int ft_putnbr_hexa(unsigned long nb);
int	ft_printf_ptr(void *ptr);
int	ft_printf_int(int nb);
int	ft_printf_unsigned(unsigned int);
int ft_printf_lowhexa(unsigned int);
int	ft_printf_uphexa(unsigned int );
int ft_putnbr_uphexa(unsigned long nb);

#endif