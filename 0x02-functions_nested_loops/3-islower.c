#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character
 * Description: Checks for lowercase character
 * @c: given character
 *
 * Return: 1 if lowercase or 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
