#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: is checked if it's uppercase
 * Return: 1 if @C or 0 otherwise
 */
int _isupper(int c)
{
	int start = 65, end = 90;

	if (c >= start && c <= end)
		return (1);
	return (0);
}
