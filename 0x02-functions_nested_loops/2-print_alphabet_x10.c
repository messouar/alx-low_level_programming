#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet, in lowercase x10
 * Description: Prints the alphabet, in lowercase, ten times followed by a
 * new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int count = 0;

	for (count = 0; count < 10; count++)
	{
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		i = 97;
	}
}
