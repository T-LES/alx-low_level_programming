#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *new_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	new_str = malloc(i + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		new_str[j] = str[j];
	}

	return (new_str);
}
