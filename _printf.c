#include "main.h"

/* Global variable to hold the current flag */
char _flag = '\0';

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

	/* Array of format specifiers and their corresponding functions */
	format_specifier_t specifiers[] = {
		{"%c", print_char}, {"%s", print_string}, {"%%", print_percent},
		{"%d", print_int}, {"%i", print_int}, {"%b", print_binary},
		{"%u", print_unsigned}, {"%o", print_octal}, {"%x", print_hex},
		{"%X", print_HEX}, {"%S", print_special_string}, {"%p", print_pointer},
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
		_flag = '\0';  /* Reset flag for each new format specifier */

		/* Check if a flag is present */
		if (format[i] == '+' || format[i] == ' ' || format[i] == '#')
		{
			_flag = format[i];
			i++;
		}

		/* Match format specifier and apply corresponding function */
		for (j = 0; specifiers[j].specifier != NULL; j++)
		{
			/* Match specifier pattern */
			if (specifiers[j].specifier[0] == format[i] &&
			    specifiers[j].specifier[1] == format[i + 1])
			{
				if (_flag && (format[i] == 'd' ||
							format[i] == 'i'))
				{
					len += print_flags(args, _flag);
				}
				else
				{
					len += specifiers[j].function(args);
				}
				i += 2;
				goto Here;
			}
		}

		/* If no specifier matched, print the character as it is */
		_putchar(format[i]);
		len++;
		i++;
	}

	va_end(args);
	return (len);
}

