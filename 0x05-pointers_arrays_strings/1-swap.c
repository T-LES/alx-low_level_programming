#include "main.h"

/**
 * swap_int - swap the values of two integer
 * @a: is a pointer
 * @n: is a pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
