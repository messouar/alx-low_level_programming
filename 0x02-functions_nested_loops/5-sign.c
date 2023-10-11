#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * Description: Prints the sign of a number
 * @n: given number
 *
 * Return: 1 if positive, 0 if null or -1 if negative
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
