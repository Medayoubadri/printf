#include "main.h"

/**
 * handle_hash_flag - Handles the '#' flag for octal and hexadecimal
 * @format: Format string
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int handle_hash_flag(const char *format, va_list args)
{
	int len = 0;

	if (format[1] == 'o')
	{
		len += _putchar('0'); /* Prepend '0' for octal */
		len += print_octal(args);
	}
	else if (format[1] == 'x')
	{
		len += _putchar('0');
		len += _putchar('x'); /* Prepend '0x' for hexadecimal */
		len += print_hex(args);
	}
	else if (format[1] == 'X')
	{
		len += _putchar('0');
		len += _putchar('X'); /* Prepend '0X' for hexadecimal */
		len += print_HEX(args);
	}

	return (len);
}

