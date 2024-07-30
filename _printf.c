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
	int i = 0, j, len = 0;

	convert_match m[] = {
		{"%c", print_char}, {"%s", print_string}, {"%%", print_percent},
		{"%d", print_int}, {"%i", print_int},
		{NULL, NULL}
	};

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

Here:
	while (format[i] != '\0')
	{
		j = 4;

		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}

	va_end(args);
	return (len);
}

