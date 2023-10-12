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
	
	if (n < 0)
		l = (n * -1) % 10;
	else
		l = n % 10;

	_putchar (l + '0');
	return (l);
}
