#include "main.h"

/**
 * *_strncpy - Copies a string
 *
 * @dest: destination string
 * @src: source string 
 * @n: number of bytes
 *
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[i] = src[i];
	}
	dest[i] = '\0';
}
