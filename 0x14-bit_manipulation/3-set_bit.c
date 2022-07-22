#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if success, or -1 if there is an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k, m;

	m = (sizeof(unsigned long int) * 8);
	k = 1 >> index;

	if (index >= m)
		return (-1);

	*n = *n | k;
	return (1);
}
