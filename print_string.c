#include "main.h"

/**
 * print_string - Prints a string
 * @args: List of arguments
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (!str)
		str = "(null)";

	while (str[len])
		len++;

	write(1, str, len);
	return (len);
}

