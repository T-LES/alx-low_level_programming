#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *str;
	char *subs;

	while (*haystack != '\0')
	{
		str = haystack;
		subs = needle;
		while (*subs != '\0' && *haystack == *subs)
		{
			haystack++;
			subs++;
																	}
		if (!*subs)
			return (str);
		haystack = str + 1;
	}
	return (0);
}
