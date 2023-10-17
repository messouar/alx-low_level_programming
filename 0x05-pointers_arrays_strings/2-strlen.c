#include "main.h"

/**
 * _strlen - gives lenght of given char
 * Description: function that returns the length of a string
 * @s: given string
 *
 * Return: i which is lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;
	char *ptr = NULL;

	ptr = s;
	while (*ptr)
	{
		i++;
		ptr++;
	}

	return (i);
}
