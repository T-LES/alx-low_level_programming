#include <stdio.h>

/**
 * main - Find and prints the sum of even-valued terms
 * in Fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, j = 0, k = 1, r = 0, sum = 0;

	while (r < 4000000)
	{
		r = j + k;
		j = k;
		k = r;
		if ((j % 2) == 0)
			sum = sum + j;
	}
	printf("%ld\n", sum);
	return (0);
}


