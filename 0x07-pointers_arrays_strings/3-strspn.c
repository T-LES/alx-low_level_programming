#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: is a string
 * @accept: is a string that allows the correspondance to be made
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j = 0, p = 0, k;

	while (accept[j] != '\0')
	{
		j++;
	}
	for (i = 0; s[i] >= 0; i++)
	{
		for (k = 0; k < j; k++)
		{
			if (s[i] == accept[k])
			{
				p++;
				break;
			}
		}
		if (accept[k] == '\0')
			break;
	}
	return (p);
}
