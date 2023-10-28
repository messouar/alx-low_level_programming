#include "main.h"

/**
 * main - Entry point
 * Description: program that prints its arguments
 * @argc: number of passed arguments
 * @argv: pointer to array of strings
 *
 * Return: void
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *(argv++));

	return (EXIT_SUCCESS);
}
