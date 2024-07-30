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


/**
 * print_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{
        int n = va_arg(args, int);
        int num, last = n % 10, digit, exp = 1;
        int  i = 1;

        n = n / 10;
        num = n;

        if (last < 0)
        {
                _putchar('-');
                num = -num;
                n = -n;
                last = -last;
                i++;
        }
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        exp = exp * 10;
                        num = num / 10;
                }
                num = n;
                while (exp > 0)
                {
                        digit = num / exp;
                        _putchar(digit + '0');
                        num = num - (digit * exp);
                        exp = exp / 10;
                        i++;
                }
        }
        _putchar(last + '0');

        return (i);
}
