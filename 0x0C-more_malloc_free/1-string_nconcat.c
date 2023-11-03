#include "main.h"

/**
 * string_nconcat - concatenates two strings with only n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenatedString = NULL;
	unsigned int s1Length = 0;
	unsigned int s2Length = 0;
	unsigned int counter = 0;

	if (s1 == NULL)
		s1Length = 0;
	else
		s1Length = strlen(s1);

	if (s2 == NULL)
		s2Length = 0;
	else
		s2Length = strlen(s2);

	if (n > s2Length)
		n = s2Length;


	concatenatedString = calloc(s1Length + n + 1, sizeof(*s1));

	if (concatenatedString == NULL)
		return (NULL);

	for (counter = 0; counter < s1Length; counter++)
		concatenatedString[counter] = s1[counter];

	for (counter = 0; counter < n; counter++)
		concatenatedString[counter + s1Length] = s2[counter];

	concatenatedString[counter + s1Length] = '\0';

	return (concatenatedString);
}
