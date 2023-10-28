#include "main.h"
#include<ctype.h>

/**
 * main - Entry point
 * Description: program that adds positive numbers
 * @argc: number of passed arguments
 * @argv: pointer to array of strings
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		if (atoi(argv[i]) >= 0)
			result += atoi(argv[i]);

		i++;
	}

	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
