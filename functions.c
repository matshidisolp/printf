#include "main.h"
/********PRINT A CHARACTER********/
/**
 * print_char - Prints a character
 * @types: List of arguments (va_list)
 * @buffer: Buffer array
 * 
 * Return: Number of characters printed (always 1 for a single character)
 */
int print_char(va_list types, char buffer[])
{
	char c = va_arg(types, int);

	buffer[0] = c;
	return (1);
}
