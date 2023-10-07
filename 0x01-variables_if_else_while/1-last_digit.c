#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

/**
 * main - Entry point
 * Description: print las digit and compare it with 5, 6 and 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = abs(n) % 10;

	if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n"
				, n, lastDigit);
	else if (lastDigit < 6 || lastDigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				, n, lastDigit);

	return (0);
}
