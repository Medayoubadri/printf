#include "main.h"
#include <stdio.h>

/**
 * print_pointer - Prints a pointer address
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int address = (unsigned long int)ptr;
	char buffer[17];
	int i = 0, len = 0;

	if (ptr == NULL)
	{
		return (_printf("(nil)"));
	}

	buffer[16] = '\0';
	while (address > 0)
	{
		int digit = address % 16;

		if (digit < 10)
			buffer[15 - i] = '0' + digit;
		else
			buffer[15 - i] = 'a' + (digit - 10);
		address /= 16;
		i++;
	}

	_putchar('0');
	_putchar('x');
	len += 2;

	while (i < 16)
	{
		buffer[15 - i] = '0';
		i++;
	}

	len += _printf("%s", &buffer[16 - i]);
	return (len);
}

