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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			d = i * j;
			_putchar(d + 48);
			_putchar(44);
			_putchar(32);
		}
		_putchar(10);
	}
}
