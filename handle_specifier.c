#include "main.h"

/**
 * handle_specifier - Handles a format specifier, including flags
 * @format: Format string
 * @args: List of arguments
 * @len: Pointer to the total length of characters printed
 *
 * Return: Number of characters to skip in the format string
 */
int handle_specifier(const char *format, va_list args, int *len)
{
	int (*f)(va_list);
	int skip = 2; /* Default skip past '%' and specifier */

	/* Check for flags */
	if (format[1] == '+' || format[1] == ' ' || format[1] == '#')
	{
		f = get_specifier_function(&format[2]);
		if (f != NULL)
		{
			*len += process_flags(&format[1], args, f);
			return (3); /* Skip past flag and specifier */
		}
		else
		{
			/* Unsupported specifier, print as-is */
			_putchar(format[0]); /* Print '%' */
			_putchar(format[1]); /* Print unsupported specifier*/
			*len += 2;
			return (2);
		}
	}

	/* Handle regular specifiers */
	f = get_specifier_function(&format[1]);
	if (f != NULL)
	{
		*len += f(args);
	}
	else
	{
		/* Unsupported specifier, print as-is */
		_putchar(format[0]); /* Print '%' */
		_putchar(format[1]); /* Print the unsupported specifier */
		*len += 2;
	}

	return (skip);
}

