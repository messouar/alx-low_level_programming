#include "main.h"
#include <limits.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min value
 * @max: max value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int size = 0;
	int *result = NULL;
	int i = 0;

	if (min > max)
		return (NULL);

	if (max - min + 1 > INT_MAX || max - min + 1 < INT_MIN)
		return (NULL);

	size = max - min + 1;
	result = malloc(size * sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		result[i] = min + i;

	return (result);
}
