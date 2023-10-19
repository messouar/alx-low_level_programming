#include "main.h"

/**
 * rev_string - reverse string
 * Description: function that reverses actual string not just output
 * @s: given string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int l = 0;
	int i = 0;
	char temp;

	l = strlen(s);

	while (i <= l / 2)
	{
		temp = *(s + i);
		*(s + i) = *(s + (l - 1));
		*(s + (l - 1)) = temp;

		i++;
		l--;
	}
}
