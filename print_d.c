#include "main.h"

/**
 * print_d - Prints an integer with specifier %d
 * @args: The list of arguments
 *
 * Return: The number of characters printed
 */
int print_d(va_list args)
{
	int n = va_arg(args, int);
	int num = n, count = 0, divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	while (num / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		count += _putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
	}

	return (count);
}
