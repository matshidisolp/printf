#ifndef MAIN_H
#define MAIN_H

/** Headers */
#include <stdarg.h>
#include <stdlib.h>

/** Prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
int handle_format(char format, va_list args);
int print_str(char *str);
#endif
