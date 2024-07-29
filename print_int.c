#include "main.h"

/**
 * print_int - Prints an integer
 * @args: The argument list containing the integer to print
 *
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	char buffer[50];
	int i = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(buffer[i]);
		count++;
	}

	return (count);
}

