#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k, m;

	m = (sizeof(unsigned long int) * 8);
	k = n >> index;

	if (index >= m)
		return (-1);

	return (k & 1);
}
