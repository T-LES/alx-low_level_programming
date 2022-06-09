#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j = 0, k = 1, r;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
		{
			r = i;
			printf("%d", r);
			printf(",");
			printf(" ");
		}
		else
		{
			r = j + k;
			j = k;
			k = r;
			printf("%d", r);
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}


