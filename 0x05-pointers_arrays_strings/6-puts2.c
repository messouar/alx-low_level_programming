#include "main.h"

/**
 * puts2 - print even positions in string
 * Description: function that prints every other character of a string
 * @str: given string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int l = 0;

	l = strlen(str);
	while (i <= l - 1)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
