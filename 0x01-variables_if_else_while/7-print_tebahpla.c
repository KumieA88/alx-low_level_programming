#include<stdio.h>
/**
 * main - print the alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	int alp;

	for (alp = 'z'; alp <= 'a'; alp++)
		putchar(alp + '0');

	putchar('\n');

	return (0);
}
