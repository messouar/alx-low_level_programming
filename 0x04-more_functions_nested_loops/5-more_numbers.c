#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Function to print numbers
 * Description: Print sequence from 1 to 14 repeat 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int c = 0;

	for (c = 0; c < 10; c++)
	{
		for (i = 48; i <= 57; i++)
			_putchar(i);

		for (i = 48; i <= 52; i++)
		{
			_putchar(49);
			_putchar(i);
		}

		_putchar('\n');
	}
}
