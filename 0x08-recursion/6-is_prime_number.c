#include "main.h"
/**
 * check - ... ...
 * @a: the input number
 * @b: iterator
 * Return:one or zero
 */

int check(unsigned int a, unsigned int b)
{
	if (a % b  == 0)
	{
		if (a == b)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + check(a, b + 1));
}

/**
 * is_prime_number - check the number is a prime number or not
 * @n: input integer
 * Return: 1 if prime number 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}

	if (n == 1)
	{
		return (0);
	}
	return (check(n, 2));
}
