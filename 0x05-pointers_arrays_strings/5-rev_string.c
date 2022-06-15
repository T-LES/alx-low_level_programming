#include "main.h"

/**
 * rev_string - reverse a string
 * @s: is a pointer
 *
 * Return: a string
 */
void rev_string(char *s)
{
	int i = 0, j, p;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		p = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = p;
	}
}
