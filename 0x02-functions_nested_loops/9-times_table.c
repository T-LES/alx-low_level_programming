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
			if (j == 0)
				_putchar(48);
			else if (d < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(d + 48);
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar((d / 10) + 48);
				_putchar((d % 10) + 48);
			}
		}
		_putchar(10);
	}
}
