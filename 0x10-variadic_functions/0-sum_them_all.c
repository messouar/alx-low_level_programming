#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of variable number of arguments
 * @n: number of arguments
 *
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argumentsList;
	unsigned int counter = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(argumentsList, n);

	while (counter < n)
	{
		sum += va_arg(argumentsList, int);
		counter++;
	}

	return (sum);

	va_end(argumentsList);
}
