/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:29:04 by marnguye          #+#    #+#             */
/*   Updated: 2023/11/18 16:29:05 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_recursive(unsigned int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (i);
	i += print_recursive(num / 10);
	ft_putchar((num % 10) + '0');
	return (i + 1);
}

int	ft_print_unsigned(unsigned int num)
{
	if (num == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
		return (print_recursive(num));
}
