#include "main.h"

/**
 * print_rev - reverse string
 * Description: function that reverses a given string
 * @s: given string to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *ptr = NULL;
	int l = 0;

	ptr = s;
	l = strlen(s);
	while (l--)
	{
		_putchar(*(ptr + l));
	}
	_putchar('\n');
}
