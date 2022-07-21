#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;
	unsigned int m = 1, s = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		i++;
	}

	i = i - 1;

	while (i >= 0)
	{
		m <<= j;

		if (b[i] & 1)
			s += m;
		j++;
		m = 1;
		i--;
	}

	return (s);
}
