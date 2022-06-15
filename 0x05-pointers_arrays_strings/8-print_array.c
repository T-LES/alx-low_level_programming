#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @n: is an integer
 * @a: is a pointer
 *
 * Return: elements of an array of integers
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		printf(",");
		printf(" ");
		i++;
	}
	printf("\n");
}
