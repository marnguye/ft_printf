/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:07:43 by marnguye          #+#    #+#             */
/*   Updated: 2023/11/19 16:07:44 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_print_string(char *str);
int		ft_putchar(int c);
int		ft_putnbr(int nb);
void	ft_putstr(const char *str);
int		ft_print_unsigned(unsigned int num);
int		ft_print_pointer(unsigned long num);
int		ft_print_hex(int num);
int		ft_print_percentage(void);
int		ft_print_number(int num);
#endif
