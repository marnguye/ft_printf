/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvojemama.com <tvojemama.com@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:28:04 by marnguye          #+#    #+#             */
/*   Updated: 2023/11/20 14:51:26 by tvojemama.c      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_format(va_list arg, const char format)
{
	int len;
	char hex_format;

	len = 0;
	hex_format = format;
	if (format == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (format == 's')
		len += ft_print_string(va_arg(arg, char *));
	else if (format == 'p')
		len += ft_print_pointer(va_arg(arg, unsigned long long));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (format == 'u')
		len += ft_print_unsigned(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_print_hex(va_arg(arg, unsigned int), 16, &hex_format);
	else if (format == '%')
		len += ft_print_percentage();
	return (len);
}

int ft_printf(const char *str, ...)
{
	int i;
	va_list arg;
	int print_len;

	i = 0;
	print_len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += ft_format(arg, str[i + 1]);
			i++;
		}
		else
			print_len += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (print_len);
}
