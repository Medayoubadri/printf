#include "main.h"

/**
 * print_char - Prints a character
 * @args: List of arguments
 *
 * Return: The number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	write(1, &c, 1);
	
	return (1);
}

