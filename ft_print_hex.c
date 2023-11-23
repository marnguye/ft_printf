/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvojemama.com <tvojemama.com@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:28:23 by marnguye          #+#    #+#             */
/*   Updated: 2023/11/20 14:46:44 by tvojemama.c      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_char(char c)
{
	write(1, &c, 1);
}

void	hex(int num)
{
	int		remainder;
	char	digit;

	if (num != 0)
	{
		remainder = num % 16;
		hex(num / 16);
		if (remainder < 10)
			digit = remainder + '0';
		else
			digit = remainder - 10 + 'A';
	}
	write_char(digit);
}

int	ft_print_hex(int num)
{
	if (num == 0)
		write_char('0');
	else
		hex(num);
	write_char('\n');
	return (num);
}
