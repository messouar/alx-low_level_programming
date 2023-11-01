#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **biDimentionArray;
	int counter;

	if (width == 0 || height == 0)
		return (NULL);

	biDimentionArray = calloc(height, sizeof(int));

	for (counter = 0; counter < height; counter++)
		biDimentionArray[counter] = calloc(width, sizeof(int));

	if (biDimentionArray == NULL)
		return (NULL);

	return (biDimentionArray);
}
