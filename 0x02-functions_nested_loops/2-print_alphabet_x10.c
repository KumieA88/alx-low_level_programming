#include "main.h"
/**
 * print_alphabet_x10 - program prints alphabet_x10 times
 */
void print_alphabet_x10(void)
{
	char alp;
	int l;

	for (l = 1; l <= 10; l++)
	{

	for (alp = 'a'; alp <= 'z'; alp++)
	putchar(alp);

	putchar('\n');
	}
}
