/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvojemama.com <tvojemama.com@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:28:45 by marnguye          #+#    #+#             */
/*   Updated: 2023/11/20 14:54:11 by tvojemama.c      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long num)
{
	const char	*s;
	int			i;

	i = 0;
	s = "0123456789abcdef";
	if (num >= 16)
	{
		i += ft_pointer(num / 16);
		i += ft_pointer(num % 16);
	}
	else
		i += write(1, &s[num], 1);
	return (i);
}

int	ft_print_pointer(unsigned long num)
{
	int	i;

	i = 0;
	if (!num)
		i += write(1, "(nil)", 5);
	else
	{
		i += write(1, "0x", 2);
		i += ft_pointer(num);
	}
	return (i);
}
