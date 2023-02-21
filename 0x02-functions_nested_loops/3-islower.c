#include "main.h"
/**
 * _islower - program checks for _islower letter
 * @C: is checked if its lowercase
 * Return: 1 for lowercase or 0 for anything else
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	return (0);
}
