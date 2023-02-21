#include <stdio.h>
#include "main.h"
/**
 * main -program will print _putchar
 * Return: Always 0
 */
int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	_putchar(x[i]);

	_putchar('\n');

	return (0);
}
