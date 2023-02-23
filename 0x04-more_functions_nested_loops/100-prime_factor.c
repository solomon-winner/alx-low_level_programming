#include <stdio.h>
#include "main.h"

/**
 * main - print prime factor of the number
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a, n = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
		while ((n % a == 0) && (n != a))
			n = n / a;
	}
	printf("%lu\n", n);
	return (0);
 }

