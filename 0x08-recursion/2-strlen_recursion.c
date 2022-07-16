#include "main.h"

/**
 *  _strlen_recursion - Retuen the length of a string
 *  @s: a pointer to a string
 *  Return: the length
 */
int _strlen_recursion(char *s)
{
	int i = 0, j;

	if (*s == '\0')
	{
		j = i;
	}
	i++;
	s++;
	_strlen_recursion(s);
	return (j);
}
