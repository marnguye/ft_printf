/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:20:30 by pyerima           #+#    #+#             */
/*   Updated: 2023/11/16 16:51:16 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_print_string(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_print_void_pointer((unsigned long)va_arg(ap, void *));
	else if (specifier == 'd')
		count += ft_print_digit((long)va_arg(ap, int), 10);
	else if (specifier == 'x')
		count += ft_print_hex_lower((long)va_arg(ap, unsigned int), 16);
	else if (specifier == 'X')
		count += ft_print_hex_upper((long)va_arg(ap, unsigned int), 16);
	else if (specifier == '%')
		count += ft_print_char('%');
	else if (specifier == 'i')
		count += ft_print_digit(va_arg(ap, int), 10);
	else if (specifier == 'u')
		count += ft_print_unsigned_decimal(va_arg(ap, unsigned int), 10);
	else
		count += write (1, &specifier, 1);
	return (count);
}
