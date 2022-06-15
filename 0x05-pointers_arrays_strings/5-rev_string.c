#include "main.h"

/**
 * rev_string - reverse a string
 * @s: is a pointer
 *
 * Return: a string
 */
void rev_string(char *s)
{
	int i = 0, j = 0, l;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	while (l >= 0)
	{
		s[j] = s[l];
		j++;
		l--;
	}
	_putchar(10);
}
