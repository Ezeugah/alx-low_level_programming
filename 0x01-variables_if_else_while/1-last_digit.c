#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: cut a random number and check last digit, compare it with 5.
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand((0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 6)
		printf("last digit of %i is %i and is grater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %i is %i and is 0\n", n, last);
	else if (last < 6)
		printf("last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);
}

