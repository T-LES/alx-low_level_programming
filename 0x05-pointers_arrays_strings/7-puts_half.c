#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: is a pointer
 *
 * Return: a string
 */
void puts_half(char *str)
{
	int i = 0, j, n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 1)
	{
		n = (i - 1) / 2;

		while (n <= i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		j = i / 2;

		while (j <= i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar(10);
}
