#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -Determine if n is greater than 5, less than 6 and not 0, is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	if (b > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	}
	else if (b == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, b);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
	}
	return (0);
}
