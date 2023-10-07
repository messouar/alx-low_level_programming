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

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
