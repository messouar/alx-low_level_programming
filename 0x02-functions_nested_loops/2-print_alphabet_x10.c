#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet, in lowercase x10
 * Description: Prints the alphabet, in lowercase, ten times followed by a
 * new line
 *
 * Return: void
 */

void print_alphabet(void)
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
	}
}
