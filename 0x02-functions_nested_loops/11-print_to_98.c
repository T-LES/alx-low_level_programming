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
	int i, k, j;

	if (n < 98)
	{
		i = 0;
		j = n;
		while (j < 98)
		{
			k = n + i;
			printf("%d", n);
			printf(",");
			printf(" ");
			j = k;
			i++;
		}
	}
	else if (n == 98)
		printf("%d", n);
	else
	{
		i = 0;
		j = n;
		while (j > 98)
		{
			k = n - i;
			printf("%d", k);
			printf(",");
			printf(" ");
			j = k;
			i++;
		}
	}
	printf("\n");
}
