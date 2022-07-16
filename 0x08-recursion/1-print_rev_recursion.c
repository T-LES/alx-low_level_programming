#include "main.h"

/**
 *  _print_rev_recursion - use recursion to print a string
 *  in reverse order
 *  @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(10);
		return;
	}
	s--;
	_putchar(*s);
	_print_rev_recursion(s);
}
