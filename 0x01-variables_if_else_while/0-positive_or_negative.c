#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there
 *
 * main - is the known entry point when the run-time code is ready to start executing your program.
 *
 **/

int main(void)

{
		int n;

		srand(time(0));

		n = rand() - RAND_MAX / 2;

		/* your code goes there */

		if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else
		{
			printf("%d is zero\n", n);
		}

		return (0);
}
