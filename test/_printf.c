#include "main.h"

/**
  *_printf- Produces output according to a format
  *@format: a character string
  *
  *Return: number of characters printed excl. null to end string
  */
int _printf(const char *format, ...)
{
	int printed_char = 0;
	va_list args;
	char *str;

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
					printed_char += _putchar(va_arg(args, int));
					break;
				case 's':
					*str = va_arg(args, int);

					while (*str)
					{
						printed_char += _putchar(*str);
						str++;
					}
					break;
				case '%':
					printed_char += _putchar('%');
					break;
				default:
					printed_char += _putchar('%');
					printed_char += _putchar(*format);
					break;
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
