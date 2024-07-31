#include "main.h"

/**
 * handle_plus_flag - Handles the '+' and ' ' flags for integers
 * @args: List of arguments
 * @flag: The flag character ('+' or ' ')
 *
 * Return: Number of characters printed
 */
int handle_plus_flag(va_list args, char flag)
{
	int len = 0;
	int num;
	va_list args_copy;

	/* Create a copy of the original va_list */
	va_copy(args_copy, args);

	/* Extract the integer value without advancing the original va_list */
	num = va_arg(args_copy, int);

	if (num >= 0)
	{
		if (flag == '+')
			len += _putchar('+');
		else if (flag == ' ')
			len += _putchar(' ');
	}
	else
	{
		len += _putchar('-');
		num = -num;
	}

	/* Pass the copied va_list to print_int */
	len += print_int(args);

	/* Clean up the copied va_list */
	va_end(args_copy);

	return (len);
}

