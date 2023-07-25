#include "main.h"

int _printf(const char *format, ...)
{
	int printed_char = 0;
	va_list args;

	va_start(args, format);

	if (!format)
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				printed_char += _putchar(*format);
			else if (*format == 'c')
				printed_char += _putchar(va_arg(args, int));
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);

				while (str && *str)
					printed_char += _putchar(*str++);
			}
			else
				printed_char += (*format ? (_putchar('%') + _putchar(*format)) : -1);
		}
		else
			printed_char += _putchar(*format);
		format++;
	}
	va_end(args);
	return (printed_char);
}
