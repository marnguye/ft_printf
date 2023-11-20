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

int ft_print_hex(long n, int i, char *c)
{
	int count;

	count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		count++;
		n = -n;
	}
	if (n < i)
	{
		ft_putchar(c[n]);
		count++;
	}
	else
	{
		count += ft_print_hex(n / i, i, c);
		count += ft_print_hex(n % i, i, c);
	}
	return (count);
}