#include "main.h"

/**
 * print_array -  prints n elements of an array of integers
 * Description:  prints n elements of an array separated by comma, followed by
 * space
 * @a: given array
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n - 1)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}

	printf("\n");
}
