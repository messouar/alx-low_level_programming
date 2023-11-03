#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: wanted bytes to allocate
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
