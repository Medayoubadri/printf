#include "main.h"

/**
 * handle_specifier - Handles the format specifiers
 * @format: The format string
 * @i: The current index in the format string
 * @args: The argument list containing the values to print
 *
 * Return: The number of characters printed for the specifier
 */
int handle_specifier(const char *format, int *i, va_list args)
{
	int count = 0;

	switch (format[*i])
	{
		case 'c':
			count += print_char(args);
			break;
		case 's':
			count += print_string(args);
			break;
		case '%':
			count += print_percent();
			break;
		case 'd':
		case 'i':
			count += print_int(args);
			break;
		default:
			_putchar('%');
			_putchar(format[*i]);
			count += 2;
			break;
	}

	return (count);
}

