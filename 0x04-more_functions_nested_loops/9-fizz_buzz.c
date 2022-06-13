#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100
 * for multiples of three print Fizz
 * for multiples of five print Buzz
 * for both print FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			if (i < 100)
				printf(" ");
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
}
