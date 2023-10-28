#include "main.h"

/**
 * main - Entry point
 * Description: program that prints its name, followed by a new line.
 * @argc: number of passed arguments
 * @argv: pointer to array of strings
 *
 * Return: void
 */

int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", *argv);
	return (EXIT_SUCCESS);
}
