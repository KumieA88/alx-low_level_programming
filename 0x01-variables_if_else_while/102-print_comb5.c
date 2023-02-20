#include <stdio.h>
/**
 * main - program that prints all possible combinations of two two-digits
 * Return: Always 0
 */
int main(void)
{
	int f, q;

	for (f = 0; f <= 98; f++)
	{
	for (q = f + 1; f <= 99; q++)
	{
	putchar((f / 10) + '0');
	putchar((f % 10) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q / 10) + '0');
	if (f == 98 && q == 99)
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
