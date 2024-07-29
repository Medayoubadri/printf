#include "main.h"

/**
 * print_int - Prints an integer
 * @args: Argument list containing the integer to print
 *
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num_chars = 0;
	char buffer[20];
	int i = 0;

	if (n == 0)
	{
		return (_putchar('0'));
	}
	if (n < 0)
	{
		num_chars += _putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
	{
		num_chars += _putchar(buffer[--i]);
	}
	return (num_chars);
}
