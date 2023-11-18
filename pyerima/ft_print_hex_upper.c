/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:17:40 by pyerima           #+#    #+#             */
/*   Updated: 2023/11/14 16:54:41 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_upper(long n, int base)
{
	int		count;
	char	*characters;

	characters = "0123456789ABCDEF";
	if (n < 0)
	{
		write (1, "-", 1);
		return (ft_print_hex_upper(-n, base) + 1);
	}
	else if (n < base)
		return (ft_print_char(characters[n]));
	else
	{
		count = ft_print_hex_upper(n / base, base);
		return (count + ft_print_hex_upper(n % base, base));
	}
}
