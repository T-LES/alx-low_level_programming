#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k, p, x = 1;
	unsigned int sum = 0, i;

	p = (sizeof(unsigned long int) * 8);
	k = n ^ m;

	for (i = 0; i < p; i++)
	{
		if (k & x)
			sum++;
		x <<= 1;
	}
	return (sum);
}
