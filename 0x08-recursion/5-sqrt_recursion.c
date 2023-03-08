#include "main.h"
/**
 * find_sqrt - returns the natural square root of a number
 * @num: input for natural square root
 * @root: a root to check the square
 * Return: return -1 if @num has no square root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	return (root);
	if (root == num / 2)
	return (-1);
	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to return the square root of
 * Return: return -1 if @n has no square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (find_sqrt(n, root));
}
