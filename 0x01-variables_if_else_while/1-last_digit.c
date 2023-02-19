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
	int n, lst_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_digit = (n % 10);
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_digit);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst_digit);
	else if (last_digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, lst_digit);
	return (0);
}
