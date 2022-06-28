#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @l: is a string
 * Return: a string
 */
char *cap_string(char *l)
{
	int i, j, k;
	int delim[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; l[i] != '\0'; i++)
	{
		k = i - 1;
		if (l[i] >= 97 && l[i] <= 122)
		{
			if (i == 0)
				l[i] = l[i] - 32;
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (l[k] == delim[j])
						l[i] = l[i] - 32;
				}
			}
		}
	}
	return (l);
}
