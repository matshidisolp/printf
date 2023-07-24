#include <"main.h"
/**
  *_putchar- prints character by character to the stdout
  *@c: character supplied to the function
  *@buffer:array to store what needs to be printed
  *
  *Return: number of characters printed to stdout
  */
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == NULL || >= 1024)
	{
		puts(char buf[]);
		i = 0;
	}
	buf[i] = c;
	i++;
	return (1);
}
