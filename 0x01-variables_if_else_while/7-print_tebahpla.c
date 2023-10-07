#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: print alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'z'; i <= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
