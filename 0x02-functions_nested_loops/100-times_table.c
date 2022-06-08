#include "main.h"

/**
 * print_times_table - print the  n times table
 * starting with 0
 *
 * @n: is an integer
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, d;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
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
}
