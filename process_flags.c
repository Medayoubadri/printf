#include "main.h"

/**
 * process_flags - Handles flags for conversion specifiers
 * @format: Format string
 * @args: List of arguments
 * @f: Function pointer to the conversion specifier function
 *
 * Return: Number of characters printed
 */
int process_flags(const char *format, va_list args, int (*f)(va_list))
{
	int len = 0;
	char flag = format[0];

	if (flag == '+' || flag == ' ')
		len += handle_plus_flag(args, flag);
	else if (flag == '#')
		len += handle_hash_flag(format, args);
	else
		len += f(args); /* No flag, default processing */

	return (len);
}

