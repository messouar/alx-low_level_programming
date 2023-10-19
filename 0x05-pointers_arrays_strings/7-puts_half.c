#include "main.h"

/**
 * puts_half - prints half of a string
 * Description: function that prints the second half of the string
 * @str: given string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, l = 0;

	l = strlen(str);
	i = ((l - 1) / 2) + 1;

	while (i <= l - 1)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
