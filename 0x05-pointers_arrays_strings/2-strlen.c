#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: is a pointer
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	return (j);
}
