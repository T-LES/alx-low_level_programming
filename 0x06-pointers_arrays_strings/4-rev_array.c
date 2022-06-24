#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: is an array
 * @n: is the number of elements of the array
 * Return: the content of an array in reverse
 */
void reverse_array(int *a, int n)
{
	int j, p;

	for (j = 0; j < n / 2; j++)
	{
		p = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = p;
	}
}
