/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:21:55 by pyerima           #+#    #+#             */
/*   Updated: 2023/11/14 16:52:43 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_print_char(int c);
int		ft_print_unsigned_decimal(long n, unsigned int base);
int		ft_print_string(char *str);
int		ft_print_void_pointer(unsigned long num );
int		ft_print_format(char specifier, va_list ap);
int		ft_print_hex_lower(long n, int base);
int		ft_print_hex_upper(long n, int base);
int		ft_print_digit(long n, int base);

#endif