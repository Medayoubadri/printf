#include "main.h"

/**
 * print_char - Prints a char
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
        char c = va_arg(args, int);

        return (_putchar(c));
}

/**
 * print_string - Prints a string
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
        char *s;
        int i = 0;

        s = va_arg(args, char*);
        if (s == NULL)
        {
                s = "(null)";
        }

        while (s[i] != '\0')
        {
                _putchar(s[i]);
                i++;
        }
        return (i);
}

/**
 * print_percent - Prints a percent sign
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
