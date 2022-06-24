#include "main.h"

/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @l: is an array that content a string
 * Return: a string in uppercase
 */
char *string_toupper(char *l)
{
	int i;

	for (i = 0; l[i] != '\0'; i++)
	{
		if (l[i] >= 97 && l[i] <= 122)
			l[i] = l[i] - 32;
	}
	return (l);
}
