#include "main.h"

/**
 * rootfinder - searches the root for n
 * @n: the number for which the square root is to be calculated
 * @root: the root to be checked
 * Return: square root of a number
 */

int rootfinder(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	else
	{
		return (rootfinder(n, root + 1));
	}
}

/**
 * _sqrt_recursion - calculate the square root
 * @n: the number for which the square root is to be calculated
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (rootfinder(n, 0));
}
