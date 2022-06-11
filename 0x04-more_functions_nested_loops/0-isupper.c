#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: is an integer
 *
 * Return: if c is uppercase 1 and 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
