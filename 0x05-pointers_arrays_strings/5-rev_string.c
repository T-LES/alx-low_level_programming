#include "main.h"

/**
 * rev_string - reverse a string
 * @s: is a pointer
 *
 * Return: a string
 */
void rev_string(char *s)
{
	int i = 0;
	char p;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		p = s[i];
		i--;
	}
	_putchar(10);
}
