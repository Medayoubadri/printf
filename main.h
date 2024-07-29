#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Function prototype for _printf */
int _printf(const char *format, ...);

/* Helper function prototypes */
int print_char(va_list args);
int print_string(va_list args);

#endif /* MAIN_H */

