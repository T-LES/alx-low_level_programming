#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: is a pointer
 *
 * Return: a string
 */
void print_rev(char *s)
{
	int i = 0, l;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	i = i - 1;
	while (l >= 0)
	{
		_putchar(s[i]);
		i = i - 1;
	}
	_putchar(10);
}
