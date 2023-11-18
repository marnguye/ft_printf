#include "ft_printf.h"

int ft_putchar(int c)
{
	write(c, &c, 1);
	return (1);
}