#include "main.h"
/**
 * factorial - Returns factorial of a given number
 * @n: number to find the factorial of
 * Return: return the factorial of number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	return (1);
	else if (n > 1)
	return (n * factorial(n - 1));
	return (0);
}
