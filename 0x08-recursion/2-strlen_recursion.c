#include "main.h"

/**
 *  _strlen_recursion - Retuen the length of a string
 *  @s: a pointer to a string
 *  Return: the length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
	}
	s++;
	_strlen_recursion(s);
	return (i);
}
