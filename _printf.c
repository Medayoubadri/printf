#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: A character string. The format string is composed of
 *          zero or more directives
 *
 * Return: The number of characters printed
 *         (excluding the null byte used to end output to strings)
 * by: @medayoubadri & @PascalAmah.
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += print_char(args);
			else if (format[i] == 's')
				count += print_string(args);
			else if (format[i] == '%')
				count += print_percent(args);
			else if (format[i] == 'd')
				count += print_d(args);
			else if (format[i] == 'i')
				count += print_i(args);
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}
