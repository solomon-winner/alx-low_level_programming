#include "main.h"
/**
 *  natural - ... ...
 *  @n: input number
 *  @c: iterstor
 *  Return: square root of the number
 */
int natural(int a, int b)
{
	if (b % (a / b) == 0)
	{
		if (b * (a / b) == a)
		{
			return (b);
		}
		else
			return (-1);
	}
	return (0 + natural(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (natural(n, 2));
}
