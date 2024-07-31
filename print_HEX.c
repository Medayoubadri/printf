#include "main.h"

/**
 * print_HEX - Converts an unsigned int to hexadecimal (uppercase)
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_HEX(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int num = n;
	char buffer[9];
	int i = 8, len = 0;
	char *hex = "0123456789ABCDEF";

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	/* Handle the # flag by printing 0X prefix for HEX numbers */
	if (num > 0 && _flag == '#')
	{
		_putchar('0');
		_putchar('X');
		len += 2;
	}

	while (num > 0)
	{
		buffer[i--] = hex[num % 16];
		num /= 16;
	}

	i++;
	while (i < 9)
	{
		_putchar(buffer[i++]);
		len++;
	}

	return (len);
}

