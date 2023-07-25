#ifndef MAIN_H
#define MAIN_H

/** Headers */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/** Prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *str);
int print_char(char c);
int print_number(int num);
#endif
