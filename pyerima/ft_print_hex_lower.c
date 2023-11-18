/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:17:32 by pyerima           #+#    #+#             */
/*   Updated: 2023/11/15 18:44:30 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_lower(long n, int base)
{
	int		count;
	char	*characters;

	characters = "0123456789abcdef";
	if (n < 0)
	{
		write (1, "-", 1);
		return (ft_print_hex_lower(-n, base) + 1);
	}
	else if (n < base)
		return (ft_print_char(characters[n]));
	else
	{
		count = ft_print_hex_lower(n / base, base);
		return (count + ft_print_hex_lower(n % base, base));
	}
}
