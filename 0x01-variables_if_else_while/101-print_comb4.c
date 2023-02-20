#include <stdio>
/**
 * main - program that prints all possible different combinations
 * Return: Always 0
 */
int main(void)
{
	int f, q, t;

	for (f = '0'; f < '9'; f++)
	{

	for (q = f + 1; q <= '9'; q++)
	{
	for (t = q + 1; t <= '9'; t++)
	{
	if ((f != q) != t)
	{
	putchar(f);
	putchar(q);
	putchar(t);
	if (f == '7' && q == '8')
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
