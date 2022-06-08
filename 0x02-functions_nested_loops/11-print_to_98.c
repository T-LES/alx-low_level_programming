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
	int i;

	if (n < 98)
	{
		i = 0;
		while (i < 98)
		{
			n = n + i;
			printf("%d", n);
			printf(" ");
			printf(",");
			i++;
		}
	}
	else if (n == 98)
		printf("%d", n);
	else
	{
		i = 0;
		while (i < 98)
		{
			n = n - j;
			printf("%d", n);
			printf(" ");
			printf(",");
			i++;
		}
	}
	printf("\n");
}
