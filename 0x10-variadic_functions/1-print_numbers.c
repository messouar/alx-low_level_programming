#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "variadic_functions.h"

/**
 * print_numbers - print variable number of arguments with seperator
 * @separator: separator to print between values
 * @n: number of arguments
 *
 * Return: no return value (void)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argumentsList;
	unsigned int counter = 0;
	int separatorLength = 0;
	int position = 0;
	int argument = 0;

	va_start(argumentsList, n);

	if (separator != NULL)
		separatorLength = strlen(separator);

	while (counter < n)
	{
		argument = va_arg(argumentsList, int);

		if (argument < 0)
			printf("-");

		printf("%d", abs(argument));

		position = 0;

		if (counter != n - 1)
		{
			if (separator != NULL)
			{
				while (position < separatorLength)
				{
					printf("%c", separator[position]);
					position++;
				}
			}
		}

		counter++;
	}

	printf("\n");

	va_end(argumentsList);
}
