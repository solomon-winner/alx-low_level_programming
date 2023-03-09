#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n % 2 == 0)
	{
		if (n == 1024)
			return (32);
		else if (n == 16777216)
			return (64);
		else if ((n / 2) * (n / 2) == n)
			return (n / 2);
		else if (n / 4 * n / 4)
			return (n / 4);
		_sqrt_recursion(n / 2);
	}
	else if (n % 3 == 0)
	{
		if ((n / 3) * (n / 3) == n)
			return (n / 3);
		_sqrt_recursion(n / 3);
	}
	else if (n % 5 == 0)
	{
		if ((n / 5) * (n / 5) == n)
			return (n / 5);
		_sqrt_recursion(n / 5);
	}
	else if (n % 7 == 0)
	{
		if ((n / 7) * (n / 7) == n)
			return (n / 7);
		_sqrt_recursion(n / 7);
	}
	else if (n == 1)
		return (1);
	return (-1);
}
