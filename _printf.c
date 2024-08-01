#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 * by: @medayoubadri @PascalAmah
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, len = 0, skip;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			skip = handle_specifier(&format[i], args, &len);
			if (skip > 0) {
				i += skip;
				continue;
			} else {
				_putchar('%');
				_putchar(format[i + 1]);
				len += 2;
				i += 2;
				continue;
			}
		}
		_putchar(format[i]);
		len++;
		i++;
	}

	va_end(args);
	return (len);
}

