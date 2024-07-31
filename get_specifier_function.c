#include "main.h"

/**
 * get_specifier_function - Matches the conversion specifier
 *                          with the corresponding function
 * @format: Format string
 *
 * Return: Pointer to the corresponding function or NULL if no match is found
 */
int (*get_specifier_function(const char *format))(va_list)
{
	int i;

	format_specifier_t specifiers[] = {
		{"c", print_char}, {"s", print_string}, {"%", print_percent},
		{"d", print_int}, {"i", print_int}, {"b", print_binary},
		{"u", print_unsigned}, {"o", print_octal}, {"x", print_hex},
		{"X", print_HEX}, {"S", print_special_string}, {"p", print_pointer},
		{NULL, NULL}
	};

	for (i = 0; specifiers[i].specifier != NULL; i++)
	{
		if (specifiers[i].specifier[0] == format[0])
		{
			return (specifiers[i].function);
		}
	}

	return (NULL);
}

