#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_dgt = (n % 10);
	if (lst_dgt == 0)
	{
		printf("Last digit of %d is %d and is %s", n, lst_dgt, "0\n");
	return (0);

	}

	if (lst_dgt < 6)
	{
		printf("Last digit of %d is %d and id %s",
		n, lst_dgt, "less than 6 and not 0\n");
	}

	if (lst_dgt > 5)
	{
		printf("Last digit of %d is %d and is %s", n, lst_dgt, "greater than 5\n");

	return (0);

	}
}
