#include "main.h"

/**
 * _puts - print string
 * Description: function that prints a string, followed by a new line, to
 * stdout
 * @str: given string
 *
 * Return: void
 */

void _puts(char *str)
{
	char *ptr = NULL;

	ptr = str;
	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}

	_putchar('\n');
}
