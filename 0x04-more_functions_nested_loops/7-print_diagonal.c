#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print \ diagonally
 * Description: function that draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	
	else if (n > 0)
	{
		_putchar(92);
		_putchar('\n');

		while (i < n - 1)
		{
			j = 0;
			while (j <= i)
			{
				_putchar(32);
				j++;
			}

			_putchar(92);
			_putchar('\n');
			i++;

		}
	}
}
