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
	int counter1;
	int counter2;

	if (width == 0 || height == 0)
		return (NULL);

	biDimentionArray = calloc(height, sizeof(*biDimentionArray));

	if (biDimentionArray == NULL)
		return (NULL);

	for (counter1 = 0; counter1 < height; counter1++)
	{
		biDimentionArray[counter1] = calloc(width, sizeof(**biDimentionArray));

		if (biDimentionArray[counter1] == NULL)
		{
			for (counter2 = 0; counter2 <= counter1; counter2++)
				free(biDimentionArray[counter2]);

			free(biDimentionArray);
			return (NULL);
		}
	}

	return (biDimentionArray);
}
