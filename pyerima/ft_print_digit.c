/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:16:44 by pyerima           #+#    #+#             */
/*   Updated: 2023/11/14 16:44:01 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(long n, int base)
{
	int		count;
	char	*numbers;

	count = 0;
	numbers = "0123456789";
	if (n < 0)
	{
		write (1, "-", 1);
		return (ft_print_digit(-n, base) + 1);
	}
	else if (n < base)
	{
		ft_print_char(numbers[n]);
		count++;
	}
	else
	{
		count += ft_print_digit(n / base, base);
		return (count + ft_print_digit(n % base, base));
	}
	return (count);
}
