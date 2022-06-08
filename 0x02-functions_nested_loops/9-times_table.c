#include "main.h"

/**
 * times_table - print the  9 times table
 * starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, d;

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 57; j++)
		{
			d = i * j;
			_putchar(d + 48);
			_putchar(44);
			_putchar(32);
		}
		_putchar(10);
	}
}
