#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Generates a random number and
 * prints if zero, negative or positive
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero", n);
	else if (n > 0)
		printf("%d is positive", n);
	else
		printf("%d is negative", n);

	return (0);
}
