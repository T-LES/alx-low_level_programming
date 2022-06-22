#include "main.h"

/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from source
 *
 * @dest: destination string
 * @src: source string to the destination string
 * @n: number of bytes to use from source
 *
 * Return: Resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
