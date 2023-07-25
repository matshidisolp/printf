#include "main.h"

/**
 *_putchar- prints a single character to stdout
 *@c: character to be printed
 *Return: a single character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - Prints a character
 *@c: character to be printed
 *Return: 1 characters printed
 */
int print_char(char c)
{
	return (_putchar(c));
}

/**
 * print_string - Prints a string
 *@str: string to be printed
 *Return: the number of characters printed
 */
int print_string(char *str)
{
	int printed_char = 0;

	while (*str)
		printed_char += _putchar(*str++);
	return (printed_char);
}
