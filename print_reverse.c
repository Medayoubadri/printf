#include "main.h"

/**
 * print_reverse - Reverses a string and prints it
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_reverse(va_list args)
{
	char *str;
	int len = 0, i;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	/* Calculate length of the string */
	while (str[len] != '\0')
		len++;

	/* Print the string in reverse */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	return (len);
}

