#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: display the length of line
 * Return: nothing on success
 */
void print_line(int n)
{
	int count = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
}
