#include "main.h"

/****************** FORMAT ******************/
/**
  *handle_format- to check for formatting of specifiers
  *@format: character string
  *@args: arguments supplied to functions
  *Return: number of characters printed
  */
int handle_format(char format, va_list args)
{
	if (format == 'c' || format == '%')
		return (_putchar(va_arg(args, int)));
	else if (format == 's')
		return (print_str(va_arg(args, char*)));
	return (_putchar('%') + _putchar(format));
}
/****************** STRING ******************/
/**
  *print_str- prints the character string
  *@str: string to be processed
  *Return: number of characters printed
  */
int print_str(char *str)
{
	int printed_char = 0;

	if (str)
	{
		while (*str)
			printed_char += _putchar(*str++);
	}
	return (printed_char);
}
