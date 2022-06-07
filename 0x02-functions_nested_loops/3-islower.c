#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: c is an ASCII character.
 *
 * Return: If c is lowercase 1 and 0 otherwise.
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
	_putchar(10);
}
