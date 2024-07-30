#include "main.h"
#include <stdio.h>

/**
 * print_special_string - Prints a string and non-printable characters
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_special_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0, len = 0;
	char hex[3];

	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			sprintf(hex, "%02X", (unsigned int)s[i]);
			_putchar(hex[0]);
			_putchar(hex[1]);
			len += 4;
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
		i++;
	}

	return (len);
}

