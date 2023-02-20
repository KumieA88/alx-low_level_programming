#include<stdio.h>
/**
 * main - program that print all digit numbers
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
