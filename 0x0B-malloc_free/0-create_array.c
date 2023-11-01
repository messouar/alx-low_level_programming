#include "main.h"

/**
 * create_array - creates an array and initializes it with a specific char.
 * @size: size of array
 * @c: char filler
 *
 * Return: pointer to created array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int counter;

	if (size == 0)
		return (NULL);

	array = calloc(size, sizeof(c));

	if (array == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
		array[counter] = c;

	return (array);

}
