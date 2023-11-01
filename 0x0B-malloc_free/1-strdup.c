#include "main.h"

/**
 * _strdup - returns a pointer to a copy of the string given as a parameter
 * @str: given string to copy
 *
 * Return: pointer to created copy
 */

char *_strdup(char *str)
{
	char *stringCopy = NULL;
	int stringLength = 0;
	int counter = 0;

	if (str == NULL)
		return (NULL);

	stringLength = strlen(str);

	stringCopy = malloc((stringLength + 1) * sizeof(char));

	if (stringCopy == NULL)
		return (NULL);

	for (counter = 0; counter < stringLength; counter++)
		stringCopy[counter] = str[counter];

	stringCopy[counter] = '\0';

	return (stringCopy);
}
