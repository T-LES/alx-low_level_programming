#include "main.h"

/**
 * _strpbrk - sarches a string for any of a set of bytes
 * @s: is a string
 * @accept: is a string
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}
	}
	return ('\0');
}
