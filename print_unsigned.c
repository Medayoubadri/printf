#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int num = n;
	int digit, exp = 1;
	int len = 0;

	while (num / exp >= 10)
	{
		exp *= 10;
	}

	while (exp > 0)
	{
		digit = (n / exp) % 10;
		_putchar(digit + '0');
		exp /= 10;
		len++;
	}

	return (len);
}

