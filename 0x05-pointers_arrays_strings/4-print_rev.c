#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: is a pointer
 *
 * Return: a string
 */
void print_rev(char *s)
{
	int i = 0, j, l, p;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	l = i;
	for (j = 0; j < l / 2; j++)
	{
		p = s[j];
		s[i] = s[l - j - 1];
		s[l - j - 1] = p;
	}
}
