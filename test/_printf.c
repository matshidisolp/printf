#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: a character string
 * Return: number of characters printed excl. null-terminator, or -1 on error
 */
int _printf(const char *format, ...)
{
        if (!format)
                return -1;

        int printed_char = 0;
        va_list args;
        va_start(args, format);

        while (*format)
        {
                if (*format == '%')
                {
                        format++;
                        if (*format == '\0')
                                break;

                        switch (*format)
                        {
                                case 'c':
                                        printed_char += print_char(va_arg(args, int));
                                        break;
                                case 's':
                                        printed_char += print_string(va_arg(args, char*));
                                        break;
                                case 'd':
                                case 'i':
                                        printed_char += print_number(va_arg(args, int));
                                        break;
                                default:
                                        printed_char += _putchar(*format);
                        }
                }
                else
                {
                        printed_char += _putchar(*format);
                }

                format++;
        }

        va_end(args);
        return printed_char;
}

