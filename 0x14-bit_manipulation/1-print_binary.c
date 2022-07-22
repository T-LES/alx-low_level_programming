#include "main.h"

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 31, j;
	unsigned long int k;

	if (n == 0)
		_putchar(48);

	while (i >= 0)
	{
		k = 1 << i;

		if (n >= k)
		{
			j = 1;
			_putchar(49);
			n -= k;
		}
		else if (j == 1)
			_putchar(48);
		i--;
	}
}
