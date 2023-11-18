/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:18:32 by pyerima           #+#    #+#             */
/*   Updated: 2023/11/14 16:48:31 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_decimal(long n, unsigned int base)
{
	unsigned int		count;
	char				*numbers;

	numbers = "0123456789";
	if (n < 0)
	{
		write (1, "-", 1);
		return (ft_print_unsigned_decimal(-n, base) + 1);
	}
	else if (n < base)
		return (ft_print_char(numbers[n]));
	else
	{
		count = ft_print_unsigned_decimal(n / base, base);
		return (count + ft_print_unsigned_decimal(n % base, base));
	}
}
