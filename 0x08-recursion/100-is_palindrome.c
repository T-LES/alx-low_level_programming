#include "main.h"
int palindrome(char *str, int start, int end);
int len(char *st);

/**
 * len - caculates the lenght of a string
 * @st: is a string
 * Return: the length
 */
int len(char *st)
{
	if (*st == '\0')
	{
		return (0);
	}
	return (1 + len(st + 1));
}

/**
 * palindrome - checks if a string is a palindrome
 * @str: is a string
 * @start: is a beginning of the string
 * @end: is a end of a string
 * Return: 1 if str is a palindrome and 0 if not
 */
int palindrome(char *str, int start, int end)
{
	if (start == end)
		return (1);
	else if (str[start] != str[end])
		return (0);
	else if (start < (end + 1))
		return (palindrome(str, start + 1, end - 1));
	return (1);
}

/**
 * is_palindrome - returns if a string is a palindrome
 * @s: is a string
 * Return: 1 if s is a palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int k;

	k = len(s);
	if (k == 0)
		return (1);
	return (palindrome(s, 0, k - 1));
}
