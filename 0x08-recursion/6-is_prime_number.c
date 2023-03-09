#include "main.h"

/**
 * is_prime_number - checks if the number is prime number
 * @n: parameter
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n != 2 && n != 3 && n != 5 && n != 7)
	{
		if (n == 0 || n == 1)
			return (0);
		else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
			return (0);
	}
	return (1);
}
