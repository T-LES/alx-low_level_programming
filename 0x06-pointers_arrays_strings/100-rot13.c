#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @l: a string
 * Return: the encoded string
 */
char *rot13(char *l)
{
	int i, j;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotletters[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; l[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (l[i] == letters[j])
			{
				l[i] = rotletters[j];
				break;
			}
		}
	}
	return (l);
}
