#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * Description: Computes the absolute value of an integer
 * @n: given number
 *
 * Return: abs of the given integer
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
