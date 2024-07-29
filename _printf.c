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
	va_list args;
	int printed_chars = 0;
	int i = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					printed_chars += print_char(args);
					break;
				case 's':
					printed_chars += print_string(args);
					break;
				case '%':
					write(1, "%", 1);
					printed_chars++;
					break;
				default:
					write(1, &format[i], 1);
					printed_chars++;
					break;
			}
		}
		else
		{
			write(1, &format[i], 1);
			printed_chars++;
		}
		i++;
	}

	va_end(args);
	return (printed_chars);
}
