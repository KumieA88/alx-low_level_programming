#include "main.h"
/**
 * _isdigit - function that checks for a digit 0 through 9
 * @c: character to be checke
 * Return: 1 if @c is digit or 0 otherwise
 */
int _isdigit(int c)
{
	int start = 48, end = 57;

	if (c >= start && c <= end)
		return (1);
	return (0);
}
