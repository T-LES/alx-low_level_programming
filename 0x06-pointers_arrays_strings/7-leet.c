#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @l: is a string
 * Return: a string
 */
char *leet(char *l)
{
	int i, j = 0;
	int a[] = {97, 101, 111, 116, 108};
	int b[] = {65, 69, 79, 84, 76};
	int c[] = {52, 51, 48, 55, 49};

	for (i = 0; l[i] != '\0'; i++)
	{
		while (j < 5)
		{
			if (l[i] == a[j] || l[i] == b[j])
				l[i] = c[j];
			j++;
		}
	}
	return (l);
}

