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
	int i = 0, len = 0;
	int (*f)(va_list);

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

Here:
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			f = get_specifier_function(&format[i]);
			if (f != NULL)
			{
				len += f(args);
				i += 2;
				goto Here;
			}
		}
		_putchar(format[i]);
		len++;
		i++;
	}

	va_end(args);
	return (len);
}

