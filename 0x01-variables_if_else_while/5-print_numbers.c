#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - print single digits numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf('\n');

	return (0);
}
