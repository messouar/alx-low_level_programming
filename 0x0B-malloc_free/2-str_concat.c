#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenatedString = NULL;
	int s1Length = 0;
	int s2Length = 0;
	int counter = 0;

	if (s1 == NULL)
		s1Length = 0;
	else
		s1Length = strlen(s1);

	if (s2 == NULL)
		s2Length = 0;
	else
		s2Length = strlen(s2);

	 concatenatedString = calloc(s1Length + s2Length + 1, sizeof(char));

	 if (concatenatedString == NULL)
		 return (NULL);

	 for (counter = 0; counter < s1Length; counter++)
		 concatenatedString[counter] = s1[counter];

	 for (counter = 0; counter < s2Length; counter++)
          concatenatedString[counter + s1Length] = s2[counter];

	 concatenatedString[counter + s1Length] = '\0';

	 return (concatenatedString);
}
