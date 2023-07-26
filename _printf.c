#include "main.h"
/**
 * _printf - Produces output according to a format.
 * @format: a character string
 * Return: number of characters printed excl. null-terminator
 */
int _printf(const char *format, ...)
{
	if (!format)
		return (-1);

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
			if (*format == 'c')
				printed_char += print_char(va_arg(args, int));
			else if (*format == 's')
				printed_char += print_string(va_arg(args, char*));
			else if (*format == 'd' || *format == 'i')
				printed_char += print_number(va_arg(args, int));
			else
				printed_char += _putchar(*format);
		}
		else
		{
			printed_char += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (printed_char);
}
