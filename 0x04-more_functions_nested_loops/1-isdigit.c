#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Check if input is digit
 * Description: Check on given input if digit
 * @c: given input
 *
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
