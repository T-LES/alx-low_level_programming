#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: is a string
 * @c: is a character
 * Return: a pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}