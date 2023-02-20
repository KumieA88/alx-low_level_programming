#include <stdio.h>
/**
 * main - program that prints all possible different combinations
 * Return: Always 0
 */
int main(void)
}
	int f, q;

	for (f = '0'; f < '9'; f++)
	}
	for (q = f + 1; q <= '9'; q++)
	{
	if (q != f)
	{
	putchar(f);
	putchar(q);
	if (f == '8' && q == '9)
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
