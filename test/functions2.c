#include "main.h"
/**
 *print_number - Prints a number
 *@num: the number to be printed
 *Return: the number of characters printed
 */
int print_number(int num)
{
	unsigned int num_abs = num;
	int printed_char = 0;

	if (num < 0)
	{
		printed_char += _putchar('-');
		num_abs = -num;
	}
	if (num_abs / 10)
		printed_char += print_number(num_abs / 10);
	printed_char += _putchar('0' + num_abs % 10);
	return (printed_char);
}
