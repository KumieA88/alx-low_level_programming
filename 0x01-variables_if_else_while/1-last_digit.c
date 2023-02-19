#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, lt_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lt_dgt = (n % 10);
	if (lt_dgt < 6)
		printf("Last digit of %d is %d and is less than 6 and is 0\n",
		n, lt_dgt);
	else if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lt_dgt);
	else if (n == 6)
		printf("Last digit of %d is %d and is 0\n", n, lt_dgt);
	return (0);
}
