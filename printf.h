/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steph <steph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:25:44 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/28 10:39:43 by steph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);

int	ft_select_function(char c, va_list *args);

int	ft_protected_write(char c);
int ft_protected_str(char *s);

int	ft_printf_modulo(void);
int	ft_printf_str(char *s);
int	ft_printf_ptr(void *ptr);
int	ft_printf_int(int nb);
int	ft_printf_unsigned(unsigned int nb);
int ft_printf_lowhexa(unsigned int nb);
int	ft_printf_uphexa(unsigned int nb);
int ft_putnbr_uphexa(unsigned int nb);
int ft_putnbr_hexa(unsigned long nb);

#endif