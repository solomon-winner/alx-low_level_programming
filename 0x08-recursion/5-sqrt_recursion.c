#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt(1, n));
}

int sqrt(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (sqrt(i + 1, j));
}

/**
 * sqrt - checks the square root
 * @i: parameter
 * @j: parameter
 * Return: the square root
 */
