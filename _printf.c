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
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
				printed_char += _putchar(va_arg(args, int));
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);

				while (*str)
					printed_char += _putchar(*str++);
			}
			else
			{
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
	return (printed_char);
}
