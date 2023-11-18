/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:19:45 by pyerima           #+#    #+#             */
/*   Updated: 2023/11/16 16:49:52 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long num)
{
	char		*symbols;
	long		value;

	value = 0;
	symbols = "0123456789abcdef";
	if (num >= 16)
	{
		value += ft_ptr(num / 16);
		value += ft_ptr(num % 16);
	}
	else
		value += write (1, &symbols[num], 1);
	return (value);
}

int	ft_print_void_pointer(unsigned long num )
{
	long	value;
	char	*symbols;

	symbols = "0123456789abcdef";
	value = 0;
	if (!num)
		value += write (1, "(nil)", 5);
	else
	{
		value += write (1, "0x", 2);
		value += ft_ptr(num);
	}
	return (value);
}
