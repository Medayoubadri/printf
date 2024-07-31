#include "main.h"

/**
 * print_octal - Converts an unsigned int to octal
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int num = n;
	char buffer[11];
	int i = 10, len = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[i--] = (num % 8) + '0';
		num /= 8;
	}

	i++;
	while (i < 11)
	{
		_putchar(buffer[i++]);
		len++;
	}

	return (len);
}

