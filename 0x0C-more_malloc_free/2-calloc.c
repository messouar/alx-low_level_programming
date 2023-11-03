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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
