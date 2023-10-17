#include "main.h"

/**
 * swap_int - swap two integer values
 * Description: function that swaps the values of two integers
 * @a: first given number
 * @b: second given number
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
