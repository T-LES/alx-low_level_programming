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
	i = i - 1;

	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
		n = n - 1;

		while ((n <= i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		j = i / 2;
		j = j - 1;

		while (j <= i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar(10);
}
