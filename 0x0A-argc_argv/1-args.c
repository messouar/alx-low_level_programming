#include "main.h"

/**
 * main - Entry point
 * Description: program that prints number of arguments
 * @argc: number of passed arguments
 * @argv: pointer to array of strings
 *
 * Return: void
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
