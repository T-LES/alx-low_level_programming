#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: is the number of times the character _ should
 * be printed
 *
 * Return: new line if n is less or equal to 0 and
 * underscore otherwise
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i <= 0)
			_putchar(10);
		else
			_putchar(95);
	}
	_putchar(10);
}
