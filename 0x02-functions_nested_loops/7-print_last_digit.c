#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @i: the number to be treated
 * Return: return the value of the last digit
 */
int print_last_digit(int i)
{
	int last;

	last = i % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + 0);
	return (last);
}
