#include<stdio.h>
/**
 * main - print numbers of base sixteen in lowercase
 * Return: Always 0
 */
int main(void)
{
	int ch;
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
