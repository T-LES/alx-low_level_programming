#include "main.h"

/**
 * puts2 - prints every other character of a string with
 * the first character
 * @str: is a pointer
 *
 * Return: a string
 */
void puts2(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < (i - 1); j++)
	{
		str[j] = str[i];

		if (j % 2 == 0)
			_putchar(str[i]);
	}
}
