#include "main.h"

/**
 *  _puts_recursion - use recursion to print a string
 *  @s: string to print
 *  Return: a string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
