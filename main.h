#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct format_specifier - match the conversion specifiers for printf
 * @specifier: type char pointer of the specifier
 *             i.e (l, h) for (d, i, u, o, x, X)
 * @function: type pointer to function for the conversion specifier
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
int process_flags(const char *format, va_list args, int (*f)(va_list));
int handle_plus_flag(va_list args, char flag);
int handle_hash_flag(const char *format, va_list args);
int handle_specifier(const char *format, va_list args, int *len);

#endif /* MAIN_H */

