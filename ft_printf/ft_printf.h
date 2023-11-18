/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvojemama.com <tvojemama.com@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:30:35 by tvojemama.c       #+#    #+#             */
/*   Updated: 2023/11/18 16:18:21 by tvojemama.c      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
#define FT_PRINTF

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *str, ...);
int ft_print_string(char *str);
int ft_putchar(int c);
int ft_putnbr(int nb);
void ft_putstr(uintptr_t *str);
void ft_putchar_fd(char c, int fd);
int ft_print_unsigned(unsigned int num);
int ft_print_pointer(uintptr_t ptr);
int ft_print_hex(unsigned int num, const char format);
int ft_print_percentage(void);
#endif