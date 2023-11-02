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
	int **biDimensionArray;
	int counter1;
	int counter2;
	int allocation_failed = 0;

	if (width == 0 || height == 0)
		return (NULL);

	/* Allocate memory for the array of pointers (rows) */
	biDimensionArray = (int **)malloc(height * sizeof(int *));

	if (biDimensionArray == NULL)
		return (NULL);

	for (counter1 = 0; counter1 < height; counter1++)
	{
		/* Allocate memory for each row */
		biDimensionArray[counter1] = (int *)malloc(width * sizeof(int));

		if (biDimensionArray[counter1] == NULL)
		{
			allocation_failed = 1;
			break;
		}
	}

	/* Check if any allocation failed */
	if (allocation_failed)
	{
		for (counter2 = 0; counter2 < counter1; counter2++)
		{
			free(biDimensionArray[counter2]);
		}
		free(biDimensionArray);
		return (NULL);
	}

	return (biDimensionArray);
}
