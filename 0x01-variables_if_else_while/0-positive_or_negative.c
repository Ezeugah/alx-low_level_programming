#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a number is positive, negative or zero.
 *
 * Return: (success)
 */
int main(void)
{
	int n;

	srand((0));
	n =  rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
