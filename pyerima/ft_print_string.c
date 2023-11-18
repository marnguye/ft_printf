/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:19:15 by pyerima           #+#    #+#             */
/*   Updated: 2023/11/16 17:57:27 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		count = write (1, "(null)", 6);
		return (count);
	}
	while (*str != '\0')
	{
		write (1, str, 1);
		count++;
		str++;
	}
	return (count);
}
