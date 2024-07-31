#include "main.h"

/**
 * print_flags - Prints a number with + or space flag
 * @args: The list of arguments
 * @flag: The flag character (+ or space)
 *
 * Return: Number of characters printed
 */
int print_flags(va_list args, char flag)
{
	int n = va_arg(args, int);
	int len = 0;

	/* Handle the + flag for positive numbers */
	if (flag == '+' && n >= 0)
	{
		_putchar('+');
		len++;
	}
	/* Handle the space flag for positive numbers */
	else if (flag == ' ' && n >= 0)
	{
		_putchar(' ');
		len++;
	}

	/* Call print_int function to print the number */
	len += print_int(args);
	return (len);
}

