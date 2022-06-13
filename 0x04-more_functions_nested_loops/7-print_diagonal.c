#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: is the number of times the character \ should
 * be printed
 *
 * Return: new line if n is less or equal to 0 and
 * backslash otherwise
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
			{
				_putchar(92);
				_putchar(10);
			}
			else
			{
				j = 0;
				while (j < i)
				{
					_putchar(32);
					j++;
				}
				_putchar(92);
				_putchar(10);
			}
		}
	}
}
