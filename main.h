#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format_specifier
{
	char *specifier;
	int (*function)(va_list);
} format_specifier_t;

/* Function prototypes */
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_binary(va_list args);
int print_special_string(va_list args);
int print_pointer(va_list args);
int print_hex_recursive(unsigned long int n);
int _putchar(char c);
int (*get_specifier_function(const char *format))(va_list);

#endif /* MAIN_H */
