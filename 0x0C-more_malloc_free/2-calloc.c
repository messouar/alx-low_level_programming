#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of array
 * @size: elementary size of 1 unit type
 *
 * Return: pointer to allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocatedArray = NULL;
	unsigned int counter = 0;

	allocatedArray = malloc(nmemb * size);

	if (allocatedArray == NULL || nmemb == 0 || size == 0)
		return (NULL);

	for (counter = 0; counter < nmemb; counter++)
		allocatedArray[counter] = 0;

	return (allocatedArray);
}
