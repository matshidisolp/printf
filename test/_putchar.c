#include <unistd.h>
/**
  *_putchar- prints a single character to stdout
  *@c: character to be printed
  *Return: a single character
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
