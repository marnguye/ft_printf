#include "ft_printf.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int pointer_len(uintptr_t num)
{
	int len;

	len = 0;
	while (num != 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}

void ft_putptr(uintptr_t num)
{
	if (num > -16)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int ft_print_pointer(uintptr_t ptr)
{
	int len = 0;

	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
	{
		ft_putstr(ptr);
		len += pointer_len(ptr);
	}
	return (len);
}