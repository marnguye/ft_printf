/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:28:40 by pyerima           #+#    #+#             */
/*   Updated: 2023/11/18 16:59:15 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += ft_print_format(*(++format), ap);
		else
			count += write (1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}

/*int main()
{
    char c = 'A';
    char *str = "Hello, World!";
    int num = 42;
    unsigned int unsignedNum = 123;
    void *ptr = (void *)&num;

    ft_printf("Character: %c\n", c);
    ft_printf("String: %s\n", str);
    ft_printf("Integer: %d\n", num);
    ft_printf("Unsigned Integer: %u\n", unsignedNum);
    ft_printf("Hexadecimal (lowercase): %x\n", num);
    ft_printf("Hexadecimal (uppercase): %X\n", num);
    ft_printf("Pointer: %p\n", ptr);
    printf("Pointer: %p\n", ptr);
    return 0;
}*/

/*int ft_print_void_pointer(unsigned long n, unsigned int base) 
{
    int count = 0;
    char *characters = "0123456789abcdef";
    if (n < base) 
	{
        if (n == 0) 
		{
            // Print "0x" only at the start
            write(1, "0x", 2);
            count += 2;
        }
        ft_print_char(characters[n]);
        count++;
    } 
	else 
	{
        count += ft_print_void_pointer(n / base, base);
        count += ft_print_void_pointer(n % base, base);
    }
    return count;
}
*/