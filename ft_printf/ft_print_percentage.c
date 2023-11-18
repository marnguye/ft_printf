#include "ft_printf.h"

int ft_print_percentage(void)
{
	char percent = '%';
	write(1, &percent, 1);
	return (1);
}