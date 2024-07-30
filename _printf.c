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

	format_specifier_t specifiers[] = {
		{"%c", print_char}, {"%s", print_string},
		{"%%", print_percent}, {"%d", print_int},
		{"%i", print_int}, {"%b", print_binary},
		{"%u", print_unsigned}, {"%o", print_octal},
		{"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_special_string},
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
		for (j = 0; specifiers[j].specifier != NULL; j++)
		{
			if (specifiers[j].specifier[0] == format[i] &&
			specifiers[j].specifier[1] == format[i + 1])
			{
				len += specifiers[j].function(args);
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
