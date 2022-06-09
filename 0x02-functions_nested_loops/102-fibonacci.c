#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, j = 0, k = 1, r;

	for (i = 1; i <= 50; i++)
	{
		r = j + k;
		j = k;
		k = r;
		printf("%ld", r);
		if (i < 50)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}


