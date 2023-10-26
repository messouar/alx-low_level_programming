#include "main.h"

/**
 * _strcat - concat two strings
 * @dest: string in first position
 * @src: string to concat to second position
 *
 * Return: pointer to cancatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int l1 = 0;
	int l2 = 0;

	if (dest == NULL || src == NULL)
		return (NULL);

	while (*(dest + l1) != '\0')
		l1++;

	while (*(src + l2) != '\0')
		l2++;

	i = l1;

	while (j < l2)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';

	return (dest);
}
