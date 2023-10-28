#include "main.h"

/**
 * main - Entry point
 * Description: program that multiplies two numbers
 * @argc: number of passed arguments
 * @argv: pointer to array of strings
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
