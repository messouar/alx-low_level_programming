#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: print numbers in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
