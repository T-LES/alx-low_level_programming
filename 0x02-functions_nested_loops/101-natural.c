#include <stdio.h>
#include "main.h"

/**
 * main - computes and prints all the multiples
 * of 3 or 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
