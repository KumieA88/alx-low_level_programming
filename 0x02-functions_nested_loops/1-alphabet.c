#include "main.h"
/**
 * print_alphabet - program prints alphabets lettters
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	putchar('\n');

}
