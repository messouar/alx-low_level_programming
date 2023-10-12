#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * Description: Prints the last digit of a number by modulo 10
 * @n: given number
 *
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int l = 0;
	int an = 0;

	an = _abs(n);
	l = an % 10;

	_putchar (l + '0');
	return (l);
}
