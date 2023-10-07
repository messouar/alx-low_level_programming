#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: print numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
		printf("%d", i);

	putchar('\n');

	return (0);
}
