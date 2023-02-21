#include "main.h"
/**
 * _isalpha - program that checks for alphabetic character
 * @c: is checked if is a alphabet, lowercase or uppercase
 * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

	return (1);
	return (0);
}
