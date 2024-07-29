#include "main.h"

/**
 * print_string - Prints a string
 * @args: The argument list containing the string to print
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

