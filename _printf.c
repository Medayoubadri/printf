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
			count += handle_specifier(format, &i, args);
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
