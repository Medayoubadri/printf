#include "main.h"

/**
 * print_binary - Converts an unsigned int to binary
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
	int len = 0;
	int flag = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			len++;
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
			len++;
		}
		mask >>= 1;
	}
	if (len == 0)
	{
		_putchar('0');
		len++;
	}
	return (len);
}

