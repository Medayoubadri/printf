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
	int len = 0;

	if (ptr == NULL)
	{
		return (_printf("(nil)"));
	}

	_putchar('0');
	_putchar('x');
	len += 2;

	len += print_hex_recursive(addr);

	return (len);
}

/**
 * print_hex_recursive - Recursively prints a number in hexadecimal format
 * @n: The number to be printed
 *
 * Return: Number of characters printed
 */
int print_hex_recursive(unsigned long int n)
{
	int len = 0;
	char *hex = "0123456789abcdef";

	if (n / 16)
	{
		len += print_hex_recursive(n / 16);
	}

	_putchar(hex[n % 16]);
	len++;

	return (len);
}

