#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from
 * n to 98, followed by a new line.
 *
 * @n: is an integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i = 0, j = 0;

	if (n < 98)
	{
		while (i < 98)
		{
			n = n + j;
			printf("%d", n);
			_putchar(44);
			_putchar(32);
			i = n;
			j++;
		}
	}
	else if (n == 98)
		printf("%d", n);
	else
	{
		while (i < 98)
		{
			n = n - j;
			printf("%d", n);
			_putchar(44);
			_putchar(32);
			i = n;
			j++;
		}
	}
	printf("\n");
}
