#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: is a pointer
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
