#include "main.h"

/**
 * print_char - Prints a char
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	char s;

	s = va_arg(args, int);
	_putchar(s);
	return (1);
}

