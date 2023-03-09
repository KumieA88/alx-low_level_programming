#include "main.h"
/**
 * is_palindrome - function that returns 1 if a string
 * @s: input number checked
 * Return: 1 if its string or 0 is not a string
 */
int is_palindrome(char *s)
{
	int i, j;
	int len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
