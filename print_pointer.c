#include "main.h"

/**
 * print_pointer - Prints the value of a pointer in hexadecimal format
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int addr = (unsigned long int)ptr;
	char buffer[17];
	int i = 15, len = 0;
	char *hex = "0123456789abcdef";

	if (ptr == NULL)
	{
		return (_printf("(nil)"));
	}

	buffer[16] = '\0';

	while (addr > 0)
	{
		buffer[i--] = hex[addr % 16];
		addr /= 16;
	}

	while (i >= 0)
	{
		buffer[i--] = '0';
	}

	_putchar('0');
	_putchar('x');
	len += 2;

	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
		len++;
	}

	return (len);
}

