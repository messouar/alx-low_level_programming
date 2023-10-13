#include <stdio.h>
#include "main.h"

/**
 * _isupper - Check if char is uppercase
 * Description: Check on given char if uppercase
 * @c: given number char
 *
 * Return: 1 if upper, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
