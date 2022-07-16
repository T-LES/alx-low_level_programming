#include "main.h"

/**
 *  _strlen_recursion - Retuen the length of a string
 *  @s: a pointer to a string
 *  Return: the length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
		_putchar(10);
	}
	s++;
	_strlen_recursion(s);
	i++;
}
