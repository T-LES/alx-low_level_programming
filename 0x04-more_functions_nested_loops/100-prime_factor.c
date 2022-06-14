#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of
 * the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i = 2, n = 612852475143;

	while (n != i)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
			i++;
	}
	printf("%ld\n", i);
	return (0);
}
