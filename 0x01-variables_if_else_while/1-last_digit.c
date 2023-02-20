#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main: Entry point
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lstdgt = (n % 10);
	if (lstdgt == 0)
	{
		printf("Last digit of %d is %d and is %s", n, lstdgt, "0\n");
		
		return (0);
	}

	if (lstdgt < 6)
	{
		printf("Last digit of %d is %d and id %s",
		n, lstdgt, "less than 6 and not 0\n");
	}

	if (lstdgt > 5)
	{
		printf("Last digit of %d is %d and is %s", n, lstdgt, "greater than 5\n");

	}
	
}
