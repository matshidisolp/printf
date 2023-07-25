#include "main.h"
/**
 *_printf- Produces output according to a format
 *@format: a character string
 *Return: number of characters printed excl. null to end string
 */
int _printf(const char *format, ...)
{
	int printed_char = 0;
	va_list args;

	va_start(args, format);

	while (*format && printed_char >= 0)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			printed_char += handle_format(*format, args);
		}
		else
		{
			printed_char += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (printed_char >= 0 ? printed_char : -1);
}
