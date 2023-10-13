#include <stdio.h>
#include "main.h"

/**
 * print_line - Print a line of _
 * Description: Print _ n times
 * @n: number of times _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}

	_putchar('\n');
}
