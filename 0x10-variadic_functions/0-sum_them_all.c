#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - ... ...
 * @n: number of parametres
 * Return: ... ...
 */

int sum_them_all(const unsigned int n, ...)
{
	int s;
	va_list ap;
	unsigned int count = 0;

	sum = 0;
	va_start(ap, n);

	while (count < n)
	{
		s += va_arg(ap, int);
		count++;
	}
	va_end(ap);
	return (s);
}
